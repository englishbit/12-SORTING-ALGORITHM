#include<stdio.h>
int main(){
        int n,min,temp,minIndex;
        //logic for taking the input
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

        }
        
        //logic for sorting
        for(int k=0;k<n-1;k++){
            minIndex=k;

            for(int i=k+1;i<n;i++){
                 
                 if(arr[i]<arr[minIndex]){
                    minIndex=i;
                   
                 }
                  
            }

            if (minIndex != k) { 
                temp = arr[k];
                arr[k] = arr[minIndex];
                arr[minIndex] = temp;
            }

        }

        //logic for output
        for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }

        
    return 0;
}

