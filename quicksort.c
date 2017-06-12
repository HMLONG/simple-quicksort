#include <stdio.h>
int partition(int* A,int p,int r){
  int x=A[r];
  int i=p-1;
  for(int j=p;j<=r-1;j++){
    if(A[j]<x){
      i++;
      //exchange
      int temp=A[i];
      A[i]=A[j];
      A[j]=temp;
    }
  }
  //exchange
  int temp=A[i+1];
  A[i+1]=A[r];
  A[r]=temp;
  return i+1;
}

void quick_sort(int* A,int p,int r){
  if(p<r){
    int d=partition(A,p,r);
    quick_sort(A,p,d-1);
    quick_sort(A,d+1,r);
  }
}

void printArray(int *A,int length){
  for(int i=0;i<length;i++)
    printf("%d ",A[i]);
    printf("\n");
}

void main(){
  int A[8]={1,3,7,8,6,3,9,11};
  printArray(A,8);
  quick_sort(A,0,7);
  printArray(A,8);
}
