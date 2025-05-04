#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //logic for special case
    if(n<1){
        printf("invalid input\n");
        return -1;
    }

    int array[n];

    //logic for taking the input
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }


    //logic for sorting 
    int temp;
    
    for(int i=0;i<n;i++){
        int swaped=0;
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                swaped=1;
            }
        }
        if(swaped==0){
            break;
        }
    }



    //logic for printing the output

    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }









    return 0;
}