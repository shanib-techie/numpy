#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int k;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the value of array  at index "<<i<<" :";
        cin>>arr[i];
        
    }
    //original array

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // insertion sort
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j] < arr[j-1] ){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }


        cout<<"sorted array: ";
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     
     
   }

