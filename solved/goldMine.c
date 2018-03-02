#include<stdio.h>
int main()
{
    int test,row,coloumn,i,j,flag,c = 0;
    scanf("%d",&test);

    while(test--){
    c++;
    flag = 0;
    scanf("%d %d",&row,&coloumn);
     char field[row][coloumn];
    for(i=0; i<row; i++){
        for(j=0; j<coloumn; j++){
            scanf("%c*",&field[i][j]);
            }
    }
    // test zone
    for(i=0; i<row; i++){
      for(j=0; j<coloumn; j++){
         printf("%c",field[i][j]);
      }
      printf("\n");

   }
    //test zone
     printf("Case %d:\n",c);
     for(i=0; i<row; i++){
        for(j=0; j<coloumn; j++){
           if(field[i][j] == '$'){
              flag = 1;
              printf("%d,%d\n",i+1,j+1);
        }
    }

  }
  if(flag != 1){
    printf("No Gold Found\n");
  }


}
    return 0;
}
