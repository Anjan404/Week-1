#include<stdio.h>
int main()
{
  int arrLen, largeEle;
  printf("Enter array size: ");
  scanf("%d",&arrLen);
  int arr[arrLen];
  printf("Enter %d elements: ",arrLen);
  for (int i=0; i<arrLen; i++){
    scanf("%d",&arr[i]);
  }
  largeEle=arr[0];
  for (int j=1; j<arrLen; j++){
    if(arr[j]>largeEle){
      largeEle=arr[j];
    }
  }
  printf("Largest element: %d",largeEle);
  return 0;
}