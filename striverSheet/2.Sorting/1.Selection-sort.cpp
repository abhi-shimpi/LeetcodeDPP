#include <iostream>
using namespace std;

int n;
void swap(int i,int j,int arr[]) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void selection_sort(int arr[]) {
  for(int i=0;i<=n-2;i++) {
    int mini = i;
    for(int j=i;j<=n-1;j++) {
      if(arr[j] < arr[mini]) mini = j;
    }
    swap(i,mini,arr);
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
    selection_sort(arr);
    print_arr(arr);
    return 0;
}