print("Enter the number of different denominations of the coins")
n=int(input())
coins=[]
print("Enter the number of different denominations of the coins")
for i in range(0,n):
    coins.append(int(input()))
print("Enter the weight")
w=int(input())
amt=[]
for i in range(0,w+1):
    amt.append(i)
#print(amt)
arr = [[0]*(w+1)]*n
for i in range(len(arr)):
    arr[i][0]=1
#print(arr)
for i in range(0,len(coins)):
    for j in range(0,len(amt)):
        if coins[i]>j:
            arr[i][j]=arr[i-1][j]
        else:
            arr[i][j]=arr[i-1][j]+arr[i][j-coins[i]]
#print(arr)
print("Number of possible ways to make total sum of Rs.",w," from the given denominations:",arr[n-1][w])

