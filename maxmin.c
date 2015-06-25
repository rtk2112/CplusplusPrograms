//
//  File.c
//  
//
//  Created by Ryo Kono on 5/26/14.
//
//

#include <stdio.h>

int main() {

    int a=0;
    int b=0;
    int i=0;
    int c=0;
    int min=0;
    int max=0;


    printf("Enter number of numbers.");
    scanf("%d",&b);

    for (i = 0; i< b; i++){
    printf("Please enter numbers.");
    scanf("%d",&c);
        if (i== 0){
        max = c;
        min = c;
        }
        else
        { if (c >= max)
            max = c;
          if (c <= min)
              min = c;
        }
}
    printf("max = %d min = %d",max,min);
}
