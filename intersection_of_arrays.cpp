#include <climits>
#include <iostream>
using namespace std;
#include <climits>
bool isPresent(int *A,int n,int x){
    for(int i=0;i<n;i++){
        if(A[i]==x){
            A[i]=INT_MAX;//so that duplicates managed
            return true;
        }
    }
    return false;
}
void intersection(int *input1, int *input2, int size1, int size2){
    for(int i=0;i<size1;i++){
        if(isPresent(input2,size2,input1[i])){
            cout<<input1[i]<<" ";
        }
    }
}