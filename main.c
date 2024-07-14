#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,sum =0;
  printf("size of sum %d byte \n", sizeof(sum));
  printf("size of int %d byte \n", sizeof(int));
  printf("enter the size of array : ");
  scanf("%d",&n);

  int arr[n];
  printf("enter the element of the array: ");
  for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for (int i=0;i<n;i++){
    sum = sum +arr[i];
  }
  printf("the sum of array is: %d\n",sum);
   printf("size of sum %d byte \n", sizeof(sum));
    return 0;
}
