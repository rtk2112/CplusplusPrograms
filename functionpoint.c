//
//  functionpoint.c
//  
//
//  Created by Ryo Kono on 6/15/14.
//
//

#include <stdio.h>
#include <math.h>

int main(){
    double sum_square(double (*f)(double), int ,int);
    double f(double);
    double g(double);
    double h(double);
    

    printf("%lf \n ",sum_square(f,1,10000));
    printf("%lf \n ", sum_square(g,2,13));
    printf("%lf \n ", sum_square(h, 2,13));
    
    
}

double sum_square(double (*f)(double x), int m, int n)
{
    int k;
    double sum = 0.0;
    for (k=m; k<=n;++k)
        sum = sum + f(k)*f(k);
    return sum;
    
}

double f(double x){
    return 1.0/x;
    
}

double g(double x){
    return cos(x);
}

double h(double x){
    return tan(x)+sin(x)+cos(x);
}

->