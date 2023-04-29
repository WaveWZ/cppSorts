#include <iostream>
using namespace std;

int bubbleSort(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

int main(){
int n,i;

cout << "How many numbers do you want in your array: ";
cin >>n;
int array[n];

for(int i=0;i<n;i++){
    cout << "Enter the "<<i+1<<". number: ";
    cin>> array[i];
}

bubbleSort(array,n);

for(int j=0;j<n;j++){
    cout <<array[i];
}
    return 0;
}
