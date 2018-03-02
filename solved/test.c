#include<stdio.h>
int main()
{
    int test = 0,number = 0,i,j;
    double temp;

    scanf("%d",&test);

    while(test--){
    scanf("%d",&number);
    double arr[number];

    for(i=0; i<number; i++){
         scanf("%lf",&arr[i]);
    }
    for(i=0; i<number; i++){
        for(j=0; j<number-1; j++){
            if(arr[j] > arr[j+1]){
                temp     = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<number; i++){
            printf("%lf",arr[i]);
            if(i <number-1){
                printf(",");
            }

    }
    printf("\n");
    }


    return 0;

}

