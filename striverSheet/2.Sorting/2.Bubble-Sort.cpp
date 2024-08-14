#include <iostream>
using namespace std;

int n;
void swap(int i,int j,int arr[]) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void Bubble_Sort(int arr[]) {
 for(int i=n-1;i>=1;i--) {
    int didSwapHappened = 0;
    for(int j=0;j<i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(j,j+1,arr);
                didSwapHappened = 1;
            }
        }
         if(!didSwapHappened) {
            break;
        }
        cout<<"runs"<<endl;
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
    Bubble_Sort(arr);
    print_arr(arr);
    return 0;
}