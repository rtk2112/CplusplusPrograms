//
//  File.c
//  
//
//  Created by Ryo Kono on 6/2/14.
//
//

#include <stdio.h>

int main(){
    
    int divisor = 1;
    int number = 20;
    int count;
    int a = 1;
    int checkdiv(int);
    
    for (;a==1;)
    {
        number++;
        
        count = checkdiv(number);
        if (count == 10)
        break;
    }//while
    printf("%d",number);
}

int checkdiv( int number) {
    int count=0;
    int divisor;
    
    for (divisor=1;divisor<=10;divisor++)
    {
        if (number % divisor != 0)
            break;
        count = count+1;
    }//for loop
    return count;
    
}