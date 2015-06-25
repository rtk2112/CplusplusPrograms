//
//  File.c
//  
//
//  Created by Ryo Kono on 5/26/14.
//
//

#include <stdio.h>

int main() {
   double a=0;
    double b=0;
    int i=0;
    
    printf("Enter number.");
    scanf("%lf",&b);
    
    for (i =1 ;i<=b;i++){
        if ((i%3==0) || (i%5==0))
            a += i;
        
    }
    printf("The sum is %lf",a);
}