#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
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
    for(int i=1;i<n;i++){
        int element_jisko_sahi_position_pahucha=A[i];
        int j=i-1;
        while(j>=0 && element_jisko_sahi_position_pahucha<A[j]){
            /*shift sabko ek aage*/
            A[j+1]=A[j];
            j--;
        }
        /*now sahi position reached j mei j ke ek aage put*/
        A[j+1]=element_jisko_sahi_position_pahucha;
    }
    printArray(A,n);
}