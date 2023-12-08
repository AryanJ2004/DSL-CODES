r1=int(input("Enter the number of rows in matrix1="))
c1=int(input("Enter the number of column in matrix1="))
mat1=[]
 
for i in range(r1):
    row=[]
    for j in range(c1):
        value=int(input("Enter the value"))
        row.append(value)
    print(row)
    mat1.append(row)
for i in mat1:
    print (i)




r2=int(input("Enter the number of rows in matrix2="))
c2=int(input("Enter the number of column in matrix2="))
mat2=[]
 
for i in range(r2):
    row=[]
    for j in range(c2):
        value=int(input("Enter the value"))
        row.append(value)
    print(row)
    mat2.append(row)
for i in mat2:
    print (i)




for i in mat1:
    print (i)
for i in mat2:
    print (i)
def add():
    add=[]
    for i in range(r1):
        row=[]
        for j in range(c1):
            value=mat1[i][j]+mat2[i][j]
            row.append(value)
        add.append(row)
    for i in add:
        print (i)





print("matrix1",mat1)
print("matrix2",mat2)
def sub():
    sub=[]
    for i in range(r1):
        row=[]
        for j in range(c1):
            value=mat1[i][j]-mat2[i][j]
            row.append(value)
        sub.append(row)
    for i in sub:
        print (i)




def trans():
    trans=[]
    for i in range(r1):
        row=[]
        for j in range(c1):
            value=mat1[j][i]
            row.append(value)
        trans.append(row)
    for i in trans:
        print (i)




def mul():
    if c1 != r2:
        print("Matrix multiplication not possible.")
        return
    result = []
    for i in range(r1):
        row = []
        for j in range(c2):
            value = 0
            for k in range(c1):
                value += mat1[i][k] * mat2[k][j]
            row.append(value)
        result.append(row)
    for i in result:
        print(i)



while (1):
    print("\n\n****************** M e n u ******************\n")
    print("1. Display the Addition Of Two Matrix ")
    print("2. Display The Subtraction Of Two Matrix ")
    print("3. Display The Transpose Of Two Matrix")
    print("4. Display The Multiplication Of Two Matrix ")
    print("0. Exit")
    choice = int(input("Enter Choice:- "))
    print("\n******************************************************")
    if choice == 1:
        add()
    elif choice == 2:
        sub()
    elif choice == 3:
        trans()
    elif choice == 4:
        mul()
    elif choice == 0:
        break
    else:
        print("Wrong Choice")
