#include <iostream>
using namespace std;

int n;
void swap(int i,int j,int arr[]) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int findPartitionIndex(int low,int high,int arr[]) {
   int pivot = low;
   int i = low;
   int j = high;

   while(i<j) {
        while(arr[i]<=arr[pivot] && i<=high) {
            i++;
        }
        while(arr[j]>arr[pivot] && j>= low) {
            j--;
        }
        if(i<j) {
            swap(i,j,arr);
        }
   }
   swap(pivot,j,arr);
   return j;
}

void Quick_Sort(int low,int high,int arr[]) {
   if(low < high) {
        int partitionIndex = findPartitionIndex(low,high,arr);
        Quick_Sort(low,partitionIndex-1,arr);
        Quick_Sort(partitionIndex+1,high,arr);
   }
}

void print_arr(int arr[]) {
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<endl;
  }
}
int main() 
{
   
    int arr[6] = {13,46,24,52,20,9};
    n = 6;
    Quick_Sort(0,5,arr);
    print_arr(arr);
    return 0;
}