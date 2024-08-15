#include <iostream>
using namespace std;

int n;
void Merge(int low,int mid,int high,int arr[]) {
    int temp[(high-low)+1];
    int left = low;
    int right = mid+1;
    int i=0;
    
    while(left<=mid && right<=high) {
        if(arr[left] < arr[right]) {
            temp[i] = arr[left];
            left++;
            i++;
        } else {
            temp[i] = arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid) {
        temp[i] = arr[left];
        left++;
        i++;
    }

    while(right<=high) {
        temp[i] = arr[right];
        right++;
        i++;
    }
    i=low;
    while(i<=high) {
        arr[i] = temp[i-low];
        i++;
    }
}

void Merge_Sort(int low,int high,int arr[]) {
    if(low>= high) return;

    int mid = (low + high)/2;

    Merge_Sort(low,mid,arr);
    Merge_Sort(mid+1,high,arr);
    Merge(low,mid,high,arr);
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
    Merge_Sort(0,5,arr);
    print_arr(arr);
    return 0;
}