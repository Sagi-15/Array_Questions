void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void pushZeroesEnd(int *input, int size){
    int i=0,j=size-1;
    while(i<=j){
        while(input[i]!=0){
            i++;
        }
        while(input[j]==0){
            j--;
        }
        if(i<=j){
            swap(input[i],input[j]);
        }
    }
}