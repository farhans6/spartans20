#include<stdio.h>

//#include <conio.h>

func1(int a[], int n)
{
  int i;
  printf("\nThe new array is : ");
  for(i=0;i<n;i++)
  {
    if(a[i]<0)
    {
      a[i]=0;
    }
    printf("%d",a[i]);
  }
}

int main(){
  int a[10],i,n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter elements in array: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  func1(a,n);

  return 0;
}
