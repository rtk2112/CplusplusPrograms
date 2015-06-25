//
//  bit.c
//  
//
//  Created by Ryo Kono on 8/19/14.
//
//


#include <stdio.h>

void showbits(unsigned int x)
{
    int i;
    for(i=(sizeof(int)*8)-1; i>=0; i--)
        (x&(1<<i))?putchar('1'):putchar('0');
    
    printf("\n");
}

int main(){
    
    showbits(3);
}