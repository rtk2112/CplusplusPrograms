//
//  File.c
//  
//
//  Created by Ryo Kono on 6/5/14.
//
//

#include <stdio.h>

int main() {
    int b;
    int a[5];
    int sum;
    for (b= 0;b<=5;b++){
        scanf("%d",a+b);
        sum = sum + (*(a+b));
    }

    printf("sum of array values is %d",sum);
}