#include<stdio.h>
int main(){
        //ligic for taking input 
        int n;
        scanf("%d",&n);
        //logic for special case
        if(n<1){
            return -1;
        }

        int arr[n];
        //logic for taking input 
        for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);

        }

        int temp;
        int k;
        for(int j=1;j<n;j++){
            temp=arr[j];
            k=j-1;
            
            while(k>=0&&arr[k]>temp){ 
                arr[k+1]=arr[k];
                k--;
            }
            arr[k+1]=temp;
            
        }



            //logic for printing sorting array

            for(int l=0;l<n;l++){
                printf("%d ",arr[l]);
            }







    return 0;
}