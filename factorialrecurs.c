//
//  factorialrecurs.c
//  
//
//  Created by Ryo Kono on 6/3/14.
//
//

#include <stdio.h>
int main(){
    int factorial(int c);
    int sum(int s);
    printf("%d \n",factorial(5));
    printf("%d",sum(5));
}

int factorial(int c){
    if (c ==1)
    return 1;
    else
    return (c * factorial(c-1));
}

int sum(int s){
    if (s ==1)
        return 1;
    else
        return s + sum(s-1);

}