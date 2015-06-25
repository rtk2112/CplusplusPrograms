//
//  cmpadd.c
//  
//
//  Created by Ryo Kono on 6/24/14.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double re;
    double im;
}complex;

void add( complex* a, complex* b,complex *c){
    c->re = a->re + b->re;
    c->im = a->im + b->im;
}

int main(){
    
    void add( complex *a,  complex *b,complex*);
    complex *a, *b,*c;
    
    /*a = (complex*)malloc(sizeof(complex));
    b = (complex*)malloc(sizeof(complex));
    c = (complex*)malloc(sizeof(complex));
    */
    scanf("%lf", &a->re);
    scanf("%lf",&a->im);
    scanf("%lf", &b->re);
    scanf("%lf",&b->im);
    
    add(a,b,c);
    
    printf("the sum is %lf + %lfi", c->re, c->im);
    
}