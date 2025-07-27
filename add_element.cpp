#include<stdio.h>
int main()
{
    int arr[200], arrLen, i, j;
    printf("Enter number of elements: ");
    scanf("%d",&arrLen);
    printf("Enter %d elements\n",arrLen);
    for(i=0; i<arrLen; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the new element: ");
    scanf("%d",&arr[arrLen]);
    arrLen++;
    printf("New Array:\n");
    for(j=0; j<arrLen; j++){
        printf(" %d ",arr[j]);
    }
    return 0;
}
