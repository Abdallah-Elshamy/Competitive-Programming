# Valera-and-Antique-Items
A solution for Valera and Antique Items problem in codeforces    http://codeforces.com/contest/441/problem/A

Valera is a collector. Once he wanted to expand his collection with exactly one antique item.

Valera knows n sellers of antiques, the i-th of them auctioned ki items. Currently the auction price of the j-th object of the i-th seller is sij. Valera gets on well with each of the n sellers. He is perfectly sure that if he outbids the current price of one of the items in the auction (in other words, offers the seller the money that is strictly greater than the current price of the item at the auction), the seller of the object will immediately sign a contract with him.

Unfortunately, Valera has only v units of money. Help him to determine which of the n sellers he can make a deal with.

Input

The first line contains two space-separated integers n, v (1 ≤ n ≤ 50; 104 ≤ v ≤ 106) — the number of sellers and the units of money the Valera has.

Then n lines follow. The i-th line first contains integer ki (1 ≤ ki ≤ 50) the number of items of the i-th seller. Then go ki space-separated integers si1, si2, ..., siki (104 ≤ sij ≤ 106) — the current prices of the items of the i-th seller.

Output

In the first line, print integer p — the number of sellers with who Valera can make a deal.

In the second line print p space-separated integers q1, q2, ..., qp (1 ≤ qi ≤ n) — the numbers of the sellers with who Valera can make a deal. Print the numbers of the sellers in the increasing order. 
