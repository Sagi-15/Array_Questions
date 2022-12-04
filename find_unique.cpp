#include <iostream>
using namespace std;
int findUnique(int *arr, int size){
    /*as we know ^(xor) operates as follows
    a^b=0 if a=b and something^0=something*/
    int solution=arr[0];
    for(int i=1;i<size;i++){
        /*so for all duplicates woh 0 ban ja last mei
        unique aur 0 reh hence unique hi bach*/
        solution=solution^arr[i];
    }
    return solution;
}