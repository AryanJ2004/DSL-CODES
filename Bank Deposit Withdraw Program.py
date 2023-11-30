balance=0
def deposit(amount):
    global balance
    balance+=amount

def withdraw(amount):
    global balance
    if (amount<balance):
        balance-=amount
    else:
        print("Insufficient Balance")



Blog=[]
while True:
    data=input("Enter The Transcation Details- \nD For Deposit And W For Withdraw And Stop For End:")
    if(data=="stop" or data=="Stop"):
        break
    Blog.append(data.split())
print("Passbook=",Blog)

for trans in Blog:
    if(trans[0]=="D" or trans[0] == 'd'):
        deposit(int(trans[1]))
        
for trans in Blog:
    if(trans[0]=="W" or trans[0] == 'w'):
        withdraw(int(trans[1]))
        
print("Your Final Balance Is-",balance)





