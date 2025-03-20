#include<iostream>
using namespace std;

int peakIndex(int arr[], int n) {
    int start = 0, end = n-1, mid;
    while (start<=end) {

        mid = end + (start-end)/2;

        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) {
            return mid;
        }
        else if (arr[mid] > arr[mid-1])
            start = mid + 1;
        else 
            end = mid - 1;
    }
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the no of element in array : ";
    cin>>n;

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<peakIndex(arr,n);
}