#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n, int key) {
    int start = 0, end = n-1, mid, first=-1;
    while (start<=end) {

        mid = start + (end-start)/2;

        if(arr[mid]==key) {
            first = mid;
            end = mid-1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return first;
}

int lastOccurence(int arr[],int n, int key) {
    int start = 0, end = n-1, mid, last = -1;
    while (start<=end) {

        mid = start + (end-start)/2;

        if(arr[mid]==key) {
            last =  mid;
            start=mid+1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return last;
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the no of element in array : ";
    cin>>n;

    int start = 0, end = n-1, mid, first = -1, last = -1;

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key : ";
    cin>>key;

    cout<<"first position index is : "<<firstOccurence(arr,n,key)<<endl;

    cout<<"last position index is : "<<lastOccurence(arr,n,key);
}