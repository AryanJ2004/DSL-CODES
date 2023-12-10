def binary_search(arr, key):
    
    start = 0
    end = len(arr)-1
    while start <= end:
        mid = (start + end)//2
        if arr[mid] > key:
            end = mid-1
        elif arr[mid] < key:
            start = mid + 1
        else:
            return mid
    return -1

dict1={}

while True:
    data=input("Enter name and mobile number seperated by comma")
    if 'Exit' == data:
        break
    name,num=data.split(",")
    num=int(num)
    dict1[num]=name 
print(dict1)
list1=dict1.keys()
arr=list(list1)
arr.sort()
print(arr)

key = int(input('The number to search for: '))
 
index = binary_search(arr, key)
if index < 0:
    print('{} was not found.'.format(key))
else:
    print('{} was found at index {}.'.format(key, index))
    print(key," was found at index",index)
    print('Number found at index', index)
    print("details of number found")
    print(dict1[key])

