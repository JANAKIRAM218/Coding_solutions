
import subprocess
from collections import Counter
from datetime import date, timedelta
from pathlib import Path
import html

today = date.today()
start = today - timedelta(days=364)
start -= timedelta(days=start.weekday())

# Count commits affecting only DSA solution folders
result = subprocess.run(
    [
        "git", "log", "--all",
        "--format=%cs",
        "--since=1 year ago",
        "--", "atcoder", "nxtwave"
    ],
    capture_output=True,
    text=True,
    check=True
)

commits = Counter(
    date.fromisoformat(line)
    for line in result.stdout.splitlines()
    if line.strip()
)

colors = [
    "#161b22",
    "#0e4429",
    "#006d32",
    "#26a641",
    "#39d353"
]

cells = []

for day_offset in range((today - start).days + 1):
    current = start + timedelta(days=day_offset)
    count = commits[current]

    level = 0 if count == 0 else min(4, count)

    x = day_offset // 7
    y = day_offset % 7

    tooltip = html.escape(
        f"{count} commits on {current.isoformat()}"
    )

    cells.append(
        f'<rect x="{x * 13}" y="{y * 13}" '
        f'width="10" height="10" rx="2" '
        f'fill="{colors[level]}">'
        f'<title>{tooltip}</title></rect>'
    )

weeks = ((today - start).days // 7) + 1
width = 28 + weeks * 13

svg = f'''<svg xmlns="http://www.w3.org/2000/svg"
width="100%" viewBox="0 0 {width} 105">
<style>
text {{
    fill: #8b949e;
    font-size: 9px;
    font-family: sans-serif;
}}
</style>
<text x="0" y="15">Mon</text>
<text x="0" y="41">Wed</text>
<text x="0" y="67">Fri</text>
<g transform="translate(28, 5)">
{''.join(cells)}
</g>
</svg>'''

Path("assets").mkdir(exist_ok=True)

Path("assets/heatmap.svg").write_text(
    svg,
    encoding="utf-8"
)

print("DSA heatmap generated successfully!")
print(f"Total active days: {sum(v > 0 for v in commits.values())}")
print(f"Total commits: {sum(commits.values())}")
