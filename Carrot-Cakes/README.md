# Carrot-Cakes
A solution for Carrot Cakes problem on codeforces  https://codeforces.com/group/s2nfhssfTk/contest/234823/problem/D

In some game by Playrix it takes t minutes for an oven to bake k carrot cakes, all cakes are ready at the same moment t minutes after they started baking. Arkady needs at least n cakes to complete a task, but he currently don't have any. However, he has infinitely many ingredients and one oven. Moreover, Arkady can build one more similar oven to make the process faster, it would take d minutes to build the oven. While the new oven is being built, only old one can bake cakes, after the new oven is built, both ovens bake simultaneously. Arkady can't build more than one oven.

Determine if it is reasonable to build the second oven, i.e. will it decrease the minimum time needed to get n cakes or not. If the time needed with the second oven is the same as with one oven, then it is unreasonable.

Input

The only line contains four integers n, t, k, d (1 ≤ n, t, k, d ≤ 1 000) — the number of cakes needed, the time needed for one oven to bake k cakes, the number of cakes baked at the same time, the time needed to build the second oven.

Output

If it is reasonable to build the second oven, print "YES". Otherwise print "NO".
