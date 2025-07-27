arr=[]
arrLen=int(input("Enter array size: "))
print(f"Enter {arrLen} elements")
for _ in range(arrLen):
  ele=int(input())
  arr.append(ele)
largeEle=arr[0]
for i in range(1,arrLen):
  if(arr[i]>largeEle):
    largeEle=arr[i]
print("Largest element: ",largeEle)