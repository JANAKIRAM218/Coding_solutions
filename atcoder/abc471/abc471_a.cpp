// Problem: Submission #79431555
// Platform: atcoder
// Contest: abc471
// Rating/Difficulty: abc471
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc471/submissions/79431555
// Solved on: 2026-11-11T00:06:51.248Z

a, b = map(int, input().split())

if a + b == 9 or a - b == 9 or a * b == 9 or a / b == 9.0:
    print("Nine")
else:
    print("Nein")