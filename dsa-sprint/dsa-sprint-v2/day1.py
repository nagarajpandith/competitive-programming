# https://www.codechef.com/problems/PAIREQ
# the only way we can have "minimum" interchanges is when we replace elements by the one which appears most of the time
# by this logic, we have to find how many turns did we take to replace
# if we take 'X' to be appearing most of the times, then our job is to find how many elements are there that are not 'X'
# which is total size of array - how many times 'X' appears
from collections import Counter

t = int(input())
while t > 0:
    n = int(input())
    l = list(map(int, input().split()))

    c = Counter(l)
    maxfrq = max(c.values())
    ans = n - maxfrq

    print(ans)
    t -= 1