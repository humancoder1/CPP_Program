def num_Ladoos(left , right) :
    num = right - (right - left + 1)
    sum1 = (right*((right+1)/2))**2
    sum2 = (num*((num+1)/2))**2

    net_sum = sum1 -sum2
    return net_sum%1000000007

test_case = int(input())
while(test_case):
    L , R= [int(ele) for ele in input().split()]
    ans = num_Ladoos(L,R)
    print(int(ans))
    test_case -= 1