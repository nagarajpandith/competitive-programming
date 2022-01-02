# cook your dish here
def check(a):

    inv = 0

    for i in range(1,len(a)-1):

        if a[i-1] < a[i] > a[i+1]:
            inv += 1

        if a[i-1] > a[i] < a[i+1]:
            inv += 1

    return inv

def recur(N,a):

    if len(a) == N:

        global res
        res += check(a)
        return

    recur(N,a + [0])
    recur(N,a + [1])
    recur(N,a + [2])

    return

for t in range(int(input())):

    N = int(input())
    a = []
    res = 0
    recur(N,a)
    print(res)