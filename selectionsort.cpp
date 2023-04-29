#include <iostream>
using namespace std;

void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){          
        int small=i;                 // Don't forget to take small
        for(int j=i+1;j<n;j++){      
            if(array[j]<array[small]){
                small=j;
            }
        int temp=array[small];
        array[small]=array[i];
        array[i]=temp;
        }
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int x,n;

    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<". number: ";
        cin>>arr[i];
    }
    cout << "Unsorted array: ";
    print(arr,n);

    cout << "Sorted array: ";
    selectionSort(arr,n);
    print(arr,n);

    return 0;
}
