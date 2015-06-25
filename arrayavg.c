//
//  File.c
//  
//
//  Created by Ryo Kono on 5/27/14.
//
//

#include <stdio.h>
int main(){
    int a[5];
    float average = 0;
    int y = 0;
    
    for (y=0;y<5;y++){
        scanf("%d", &a[y]);
        average = (average + a[y]);
        
        }
    average = average / y;
    printf("%f", average);
}