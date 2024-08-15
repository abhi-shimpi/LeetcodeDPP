#include <iostream>
using namespace std;

int n;
void swap(int i,int j,int arr[]) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void Insertion_Sort(int arr[]) {
    for(int i=0;i<=n-1;i++) {
        // for(int j=i;j>0;j--) {
        //     if(arr[j] < arr[j-1]) {
        //         swap(j,j-1,arr);
        //     } else break;
        // }
        // OR
        int j = i;
        while(j>0 && arr[j]<arr[j-1]) {
            swap(j,j-1,arr);
            j--;
        }
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
    Insertion_Sort(arr);
    print_arr(arr);
    return 0;
}