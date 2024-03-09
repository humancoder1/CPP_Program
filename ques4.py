test_Case = int(input())
while(test_Case>0):
    num = int(input())
    array1 = [int(x) for x in input().split()]
    array2 = []
    for i in range(0 , num):
        array2.append([array1[i] , i])
    array2.sort()
    for j in range(0 , num):
        print(array2[j][1])
    test_Case -= 1


