#include <iostream>
using namespace std;
int duplicateNumber(int *arr, int size){
    int solution=arr[0];
    /* ^ mei 2^3^4... kya hai don't try to compute
    it is associative so 2^3^4^...^3^4=>2^(3^3)^(4^4) aisa 
    automatic aa jaayega so 2^0^0^...=2^... hi ban ja
    so here aisa nahi socha 0^1^...^(n-2) kya hoga pehle
    baad mei duplicate walla let m so 1st loop se m hi reh 
    aur 2nd se m^m=0 so m ka pair aage nahi mil in 2nd loop
    jabki baaki saare ek baar in 1st loop and ek baar in 2nd 
    loop so solution worked*/
    for(int i=0;i<=size-2;i++){
        solution=solution^i;
    }
    for(int i=1;i<size;i++){
        solution=solution^arr[i];
    }
    return solution;
}