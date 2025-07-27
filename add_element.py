arr=[]
arrLen=int(input("Enter array size: "))
print(f"Enter {arrLen} elements:")
for _ in range(arrLen):
  ele=int(input())
  arr.append(ele)
newEle=int(input("Enter new element: "))
arr.append(newEle)
print("New array: ")
print(arr)