def selectionSort(arr):
    for i in range(len(arr)):
        min=i
        for j in range(i+1,len(arr)):
            if arr[min]>arr[j]:
                min=j
                
            if(min!=i):
    #swap the found minimum element with
    #the first element
                arr[i],arr[min]=arr[min],arr[i]
                
arr=[]
Num=int(input("Enter the number of students:"))
for j in range (Num):
    percentage=float(input("Enter the percentage marks:"))
    arr.append(percentage)
    
selectionSort(arr)

print("Sorted array is:")
for j in range(len(arr)):
    print(arr[j])        


# In[ ]:
