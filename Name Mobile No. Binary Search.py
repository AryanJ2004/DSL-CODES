def binary(arr,key):
    start=0
    end=len(arr)-1
    while (start<=end):
        mid=(start+end)//2
        if(arr[mid]>key):
            end=mid-1
        elif(arr[mid]<key):
            start=mid+1
        else:
            if(arr[mid]==key):
                return(True)
    return(False)

num=int(input("Number of entries= "))
dict1={}
arr=[]
for i in range(num):
    name=input("Enter name of person")
    phone=int(input("Enter phone no of person"))
    dict1[phone]=name
    arr.append(phone)
list1=dict1.keys()
list1=list(list1)
list1=list1.sort()           
key=int(input("Enter the phone number you want to search= "))
val=binary(arr,key)
if(val):
    print("Person found. The person of phone no.",key,"is",dict1[key])
else:
    print("Person not found")
