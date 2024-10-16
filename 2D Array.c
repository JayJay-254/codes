#include<stdio.h>
int main(){

    int i, j;

    int marks[2][3] = {{68, 86, 78},{58, 79, 56}};

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){

            printf("marks[%d][%d] = %d\n",i,j,marks[i][j]);
        }
    }
    return 0;
}