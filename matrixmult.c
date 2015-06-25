//
//  File.c
//  
//
//  Created by Ryo Kono on 5/27/14.
//
//

#include <stdio.h>
int main(){
    int i= 0;
    int j = 0;
    int a[3][2]={1,2,3,4,5,6};
    int b[2][3]={1,2,3,4,5,6};
    int c[3][3];
    int k = 0;
    int temp = 0;
    
    for (i = 0; i< 3; i++){
        for (j=0; j<3; j++){
            for (k=0;k<2;k++){
                temp = temp + a[i][k] * b[k][j];
                
            }//k loop
            c[i][j] = temp;
            temp = 0;
        }//j loop
    }//i loop
    
    for (i = 0; i<3; i++){
        for (j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    
}
