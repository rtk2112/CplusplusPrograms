//
//  numsum.c
//  
//
//  Created by Ryo Kono on 6/3/14.
//
//

#include <stdio.h>

int main(){
    int factorial(int);
    int b;
    int x;
    int sum = 0;
    int num;
    int a = 5;
    num = factorial(a);
    for(; num > 0;num = num/10){
        x = num %10;
        sum = sum +x;
    }
    printf("factorial is %d \t",factorial(a));
    printf("sum is %d",sum);
    
    
    
}



int factorial (int c){
    int count;
    int f=1;
    for(count = c;count>=1;count--){
        f = f*count;
        
    }
    return f;
}

