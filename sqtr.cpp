#include<iostream>
using namespace std;

int sqrt(int key) {

    if(key < 2)
        return key;

    int start = 1, end = key, mid, ans;
    while (start<=end) {

        mid = start + (end-start)/2;

        if(mid==key/mid) {
            return mid;
        }
        else if (mid<key/mid) {
            ans = mid;
            start = mid + 1;
        }
        else 
            end = mid - 1;
    }
    return ans;
}

int main() {
    int key;
    cout<<"Enter the no : ";
    cin>>key;

    cout<<sqrt(key);
}