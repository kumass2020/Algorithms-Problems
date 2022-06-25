N = int(input())

kilo_3 = 0
kilo_5 = 0

kilo_5 = N // 5
for i in range(kilo_5, -1, -1):
    # print("i: " + str(i))
    kilo_3 = (N - (5 * i)) // 3
    if (N - (5 * i)) % 3 != 0:
        if i == 0 and (N % 3 != 0):
            print("-1")
        # elif N % 3 == 0:
        #     print(N // 3)
        pass
    else:
        print(i + kilo_3)
        break
        
