#include <iostream>
#include <vector>
using namespace std;

int insertionSort(int arr[],int size){
    int i,j,temp;

    for(int i=0;i<size;i++){
        temp = arr[i];
        j = i-1;
        while(j>=0 && temp<= arr[j] ){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;
    int arr[arraySize];

    for(int i=0;i<arraySize;i++){
        cout << "Enter the "<<i+1<<". element: ";
        cin >> arr[i];
    }

    cout << "Unsorted array: \n";
    printArray(arr,arraySize);
  
    insertionSort(arr,arraySize);
    cout << "\nSorted array: \n";
    printArray(arr,arraySize);

    return 0;
}
