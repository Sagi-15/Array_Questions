int binarySearch(int *input, int n, int val){
    int start=0,end=n-1;//initialise
    while(start<=end){
        /*stop when end>start ho jaaye*/
        int mid=(start+end)/2;/*har baar mid nikalte
        array ko update karke ie. ek half
        ko discard karke dusre half mei search uss
        dusre half ka mid nikal har baar*/
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]<val){
            /*matlab val in second half of array*/
            start=mid+1;
        }
        else if(input[mid]>val){
            /*matlab val in first half of array*/
            end=mid-1;
        }
    }
    return -1;
}