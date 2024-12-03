array = []

for i in range(9):
    array.append(int(input()))

array.sort()

array_1 = sum(array)

for i in range(len(array)):
    for j in range(i+1,len(array)):
        if array_1 - array[i]-array[j] == 100:
            for k in range(len(array)):
                if k!=i and k!=j:
                    print(array[k])
            exit()
