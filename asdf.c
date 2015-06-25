//
//  asdf.c
//  
//
//  Created by Ryo Kono on 5/31/14.
//
//

#include <stdio.h>
#include<stdlib.h>
int main() {
    
    int a,b,c,temp,cnt,i;
    scanf("%d",&a);
    scanf("%d",&b);
    int *maxes;
    maxes = (int *) malloc((b-a+1)*sizeof(int));
    
    for( i=0;i<(b-a+1);i++) {
        cnt = 1;
        c= a+i;
        while(c !=1)
        {
            if(c % 2 == 0)
                c = c/2;
            else
                c = 3*c+1;
            cnt++;
        }
        maxes[i] = cnt;
    }//for loop
    
    temp= maxes[0];
    for( i=1;i<(b-a+1);i++){
        if( temp < maxes[i])
            temp = maxes[i];
    }
    printf("%d %d %d\n",a,b,temp);
    
}