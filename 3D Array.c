/*
Author:Jackson Njenga
Reg No:CT102/G/21788/23
*/
//3D array
#include<stdio.h>
int main(){
    int i, j, k;

    int marks[2][2][3] = {{{68, 76, 58},{56, 70, 66}},{{34, 44, 77},{88, 96, 49}}};

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){

                printf("marks[%d][%d][%d] = %d\n",i,j,k,marks[i][j][k]);
            }
        }
    }
    return 0;
}