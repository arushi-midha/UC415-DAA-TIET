n=int(input("Enter number of elements in list: "))

arr=[]

for i in range(n):
    element=input("Enter element: ")
    arr.append(element)


for i in range(n):
    print(arr[i])


for i in range(n):
    min=i
    for k in range(i+1,n):
        if arr[k]<arr[min]:
            min=k
    arr[min], arr[i]=arr[i], arr[min]

print("Sorted list is: ")
for i in range(n):
    print(arr[i])