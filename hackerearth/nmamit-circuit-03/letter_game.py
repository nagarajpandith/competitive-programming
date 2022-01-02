c = input()
i = 0
j = [] 
for i in range(len(c)): 
    if c[i]==c[i].lower():
        j.append(c[i].upper()) 
        else :
            j.append(c[i].lower()) j
f = ''.join([str(elem) for elem in j])  
print(f)