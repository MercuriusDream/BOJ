n = input()
l = [n]
ln = len(n)+1

while True:
    ln-=1
    if ln==1: break
    l.append(min([l[-1][:i]+l[-1][i+1:] for i in range(ln)]))

for i in l[::-1]:
    print(i)