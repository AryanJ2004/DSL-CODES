def bubbleSort(arr):
    n=len(arr)
    for pass1 in range(n):
        for i in range (0,n-pass1-1):
            if arr[i]>arr[i+1]:
                arr[i],arr[i+1]=arr[i+1],arr[i]

#===========main==========#


arr=[]
num=int(input("Enter The Number Of Students="))
for i in range(num):
    per = float(input("Enter the percentage :- "))
    arr.append(per)
bubbleSort(arr)
print("The Sorted Array Is=")
for i in range (num):
    print(arr[i])


