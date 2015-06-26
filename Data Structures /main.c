//
//  main.c
//  
//
//  Created by Ryo Kono on 9/9/14.
//
//

#include <stdio.h>
#include "myadd.h"

#define PI 3.14
#define sqr(x) x * x



int main()
{
    int sum;
//    int y;
    
    sum = add(1,2);

    printf("The sum is %d\n", sum);
    
//    y = sqr(5 + 3);
//    y = 5 + 3 * 5 + 3;
    
    return 0;
}