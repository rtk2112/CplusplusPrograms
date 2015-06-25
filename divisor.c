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
    
for (;a==1;)
{
       number++;
       count = 0;
    for (divisor=1;divisor<=20;divisor++)
    {
            if (number % divisor != 0)
            break;
        count = count+1;
    }//for loop
   if (count == 20)
       break;
}//while
    
    
    
printf("%d",number);
    
}