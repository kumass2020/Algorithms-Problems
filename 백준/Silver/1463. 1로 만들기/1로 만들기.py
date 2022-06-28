import sys

N = int(sys.stdin.readline())
li = []
li.append(0)
li.append(0)
for i in range(2, N+1):
    temp = []
    if i % 2 == 0:
        temp.append(li[i // 2] + 1)
    else:
        temp.append(li[(i - 1) // 2] + 2)
        
    if i % 3 == 0:
        temp.append(li[i // 3] + 1)
    elif i % 3 == 1:
        temp.append(li[(i - 1) // 3] + 2)
    else:
        temp.append(li[(i - 2) // 3] + 3)
    li.append(min(temp))

print(li[N])