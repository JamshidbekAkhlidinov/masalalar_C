fin  = open("input.txt")
fout = open("output.txt","w")

n = int(fin.readline())
t = 0
k = 0
r = 0
p = []
while(t!=n):
    k = k + 1
    for l in range(1,k+1,1):
        if(k%l==0):
            r = r + 1
        if r == 2:
            print (k)
            t = t+ 1
            p.append(k)
    r = 0

print(p[3])
fout.write(str(p[n]))

fin.close()
fout.close()

