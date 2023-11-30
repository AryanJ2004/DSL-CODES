
arr=[]
n=int(input("Enter The Number Of Student Enroll In Training Program-"))
for i in range(n):
    roll_no=int(input("Enter The Roll No-"))
    arr.append(roll_no)
    
def linear(arr):
    key=int(input("Enter The Key To Be Search-"))
    n=len(arr)
    for i in range(n):
        if (arr[i]==key):
            flag=1
            break
        else:
            flag=0
    if flag==1:
        print("Training Attended")
    else:
        print("Training Not Attended")
        
def sentinel(arr):
    key=int(input("Enter The Key To Be Search-"))
    n=len(arr)
    last=arr[n-1]
    arr[n-1]=key
    i=0
    while(arr[i]!=key):
        i=i+1
    arr[n-1]=last
    if(i<n-1 or arr[n-1]==key):
         print("Training Attended")
    else:
        print("Training Not Attended")
        
        
while True:
    print("1.Linear Search\n 2.Sentinel Search")
    ch=int(input("Enter Choice (Press 0 For Exit) -"))
    if(ch==1):
        linear(arr)
    if(ch==2):
        sentinel(arr)
    if(ch==0):
        break


