# Score: 10/10
n = int(input())
n+=1
for i in range(1, 2*n+1):
    for j in range(1, 2*n): 
        if i==j or i+j==2*n: 
            print('*', end='')
        else:
            print(' ', end='')
    print("") 