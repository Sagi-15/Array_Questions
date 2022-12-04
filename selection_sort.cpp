#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int index_of_min_element(int *A,int n,int start){
    /*returns index of min element from start to end of array*/
    int min=start;//assumed start walla hi smallest
    for(int i=start+1;i<n;i++){
        if(A[min]>A[i]){
            min=i;
        }
    }
    return min;
}
void printArray(int *A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    printArray(A,n);
    for(int i=0;i<n-1;i++){
        int min_element_index=index_of_min_element(A,n,i);
        swap(A[i],A[min_element_index]);
    }
    printArray(A,n);
}