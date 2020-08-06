#include<stdio.h>
int main(){
  int arr[10],i,n,key,count=0;
  printf("\nEnter size of array");
  scanf("%d",&n);
  printf("\nEnter elements of array");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  printf("\nEnter key elemnt");
  scanf("%d",&key);

  for(i=0;i<n;i++){
    if(arr[i]==key){
      count++;
    }

  }
  if(count!=0){
    printf("%d",count);
  }
  else {
    printf("Key not found");
  }
  return 0;
}
