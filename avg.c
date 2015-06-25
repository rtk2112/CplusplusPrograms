//
//  intro.c
//  
//
//  Created by Ryo Kono on 5/26/14.
//
//

#include <stdio.h>
int main() {
    int a=0;
    int i=0;
    int c=0;
    double average;
    
    for (i = 0; i< 2; i++){
        printf("Please enter numbers.");
        scanf("%d",&c);
        a += c;
    }
  
    printf("%lf",(double)a/2);
    
}