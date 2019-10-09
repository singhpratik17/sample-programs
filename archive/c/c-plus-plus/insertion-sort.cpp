#include <iostream>
using namespace std;

int insertionSort(int a[],int t){
  for(int j=1;j<t;j++){
        int key = a[j], i = j - 1;

        while(i >= 0 && key < a[i]){
            a[i+1]=a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
  return *a;
}

int main() {
    int t;  // Holds number of elements

    // Input number of elements
    cin>>t;
    int a[t]; // Array of size t

    // Input array elements separated by space
    for(int i=0;i<t;i++){
      cin>>a[i];
    }

    insertionSort(a,t);

    for(int i=0;i<t;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
