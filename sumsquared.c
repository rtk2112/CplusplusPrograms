//
//  File.c
//  
//
//  Created by Ryo Kono on 6/5/14.
//
//

#include <stdio.h>
#include <math.h>
int main(){
    int a ;
    int sumsquares= 0;
    int sumsquared = 0;
    int n= 0;
    
    scanf("%d",&n);
    for(a = 1;a<=n;a++){
        sumsquares = sumsquares+ a*a;
    }
    
    for (a = 1;a<=n;a++){
        sumsquared = sumsquared +a;
    }
    sumsquared = sumsquared * sumsquared;
    
    printf("%d",sumsquared-sumsquares);
}
