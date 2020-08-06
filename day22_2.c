#include<stdio.h>

//#include <conio.h>

func2(int a[], int n,key)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      printf("\nElement found");
      return 0;

    }
    printf("\nElement not found ");

  }

}

int main(){
  int a[10],i,key,n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter elements in array: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter key");
  scanf("%d",&key);
  func2(a,n);
}
