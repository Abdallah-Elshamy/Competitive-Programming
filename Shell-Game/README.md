# Shell-Game
A solution for shell game problem on code forces https://codeforces.com/group/s2nfhssfTk/contest/237262/problem/G

Bomboslav likes to look out of the window in his room and watch lads outside playing famous shell game. The game is played by two persons: operator and player. Operator takes three similar opaque shells and places a ball beneath one of them. Then he shuffles the shells by swapping some pairs and the player has to guess the current position of the ball.

Bomboslav noticed that guys are not very inventive, so the operator always swaps the left shell with the middle one during odd moves (first, third, fifth, etc.) and always swaps the middle shell with the right one during even moves (second, fourth, etc.).

Let's number shells from 0 to 2 from left to right. Thus the left shell is assigned number 0, the middle shell is 1 and the right shell is 2. Bomboslav has missed the moment when the ball was placed beneath the shell, but he knows that exactly n movements were made by the operator and the ball was under shell x at the end. Now he wonders, what was the initial position of the ball?

Input

The first line of the input contains an integer n (1 ≤ n ≤ 2·109) — the number of movements made by the operator.

The second line contains a single integer x (0 ≤ x ≤ 2) — the index of the shell where the ball was found after n movements.

Output

Print one integer from 0 to 2 — the index of the shell where the ball was initially placed.
