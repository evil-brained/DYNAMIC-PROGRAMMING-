""" KADANE'S ALGORITHM TO FIND THE MAXIMUM SUM OF SUBARRAY IN AN GIVEN ARRAY """
a=[1,2,3,4,5-1]
ans=max(a)
sum=0
arr=[]
for i in range(0,len(a)):
    if sum+a[i]<0:
        sum=0
    else:
        sum+=a[i]
        ans=max(sum,ans)
print(ans) 


    