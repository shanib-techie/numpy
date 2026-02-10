#include <iostream>
using namespace std;
int main(){
    int arr[6] = {5,6,5,2,7,8};
    int n = 6;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" "; 
    }

    // bubble sort

    for(int i = 0;i<n-1;i++){
        for(int j = 0 ; j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
  cout<<endl;
        for(int i =0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}
