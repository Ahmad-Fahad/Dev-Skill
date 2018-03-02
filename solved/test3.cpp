#include<bits/stdc++.h>
using namespace std;
int main(){
    int test = 0,number = 0,i,j;
    string temp;

    scanf("%d",&test);
    while(test--){
    scanf("%d",&number);
    string arr[number];

    for(i=0; i<number; i++){
         scanf("%s",&arr[i]);
    }
    for(i=0; i<number; i++){
        for(j=0; j<number-1; j++){
            if((strcmp(arr[j],arr[j+1]) > 0){
                temp     = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<number; i++){
            printf("%s",arr[i]);
            if(i <number-1){
                printf(",");
            }

    }
    printf("\n");
    }


    return 0;


}
