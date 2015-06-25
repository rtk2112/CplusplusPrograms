//
//  factorial.c
//  
//
//  Created by Ryo Kono on 6/2/14.
//
//

#include <stdio.h>

int main(){
    int factorial(int);
    int count;
    int b;
    scanf("%d",&b);
    for(count=b;count>=0;count--){
        printf("%d! is %d\n",count,factorial(count));
    }
    
}


int factorial (int c){
    int count;
    int f=1;
    for(count = c;count>=1;count--){
        f = f*count;
    
    }
    return f;
}
