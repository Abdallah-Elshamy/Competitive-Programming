# Approximating-a-Constant-Range
A solution for Approximating a Constant Range problem on codeforces  https://codeforces.com/group/s2nfhssfTk/contest/235040/problem/C

When Xellos was doing a practice course in university, he once had to measure the intensity of an effect that slowly approached equilibrium. A good way to determine the equilibrium intensity would be choosing a sufficiently large number of consecutive data points that seems as constant as possible and taking their average. Of course, with the usual sizes of data, it's nothing challenging — but why not make a similar programming contest problem while we're at it?

You're given a sequence of n data points a1, ..., an. There aren't any big jumps between consecutive data points — for each 1 ≤ i < n, it's guaranteed that |ai + 1 - ai| ≤ 1.

A range [l, r] of data points is said to be almost constant if the difference between the largest and the smallest value in that range is at most 1. Formally, let M be the maximum and m the minimum value of ai for l ≤ i ≤ r; the range [l, r] is almost constant if M - m ≤ 1.

Find the length of the longest almost constant range.

Input

The first line of the input contains a single integer n (2 ≤ n ≤ 100 000) — the number of data points.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 100 000).

Output

Print a single number — the maximum length of an almost constant range of the given sequence.
