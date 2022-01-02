tc=int(input())
for _ in range(tc):
    s,k=map(int,input().split())
    bb=input()
    c=0
    d=0
    for i in range(s-1,-1,-1):
        if int(bb[i])==0:
            c+=1
            if c==k:
                d+=1
                c=0
        if int(bb[i])==1:
            c=0
    print(d)