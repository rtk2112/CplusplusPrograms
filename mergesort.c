//
//  mergesort.c
//  
//
//  Created by Ryo Kono on 6/13/14.
//
//

#include <stdio.h>


int main(){
    int k= 0; int i= 0; int j = 0;
    int a[50];
    int b[50];
    int c[50];
    int na = 0; int nb = 0;
    int *p;
    for (i=0;i<na;i++)
        scanf("%d",(a+i));
    
    for (i=0;i<nb;i++)
        scanf("%d",&b[i]);
    
    int * merge(int [],int [],int,int);

    p = merge(int a[],int b[],na,nb);
    for (i=0; i<k;i++)
        printf("%d ",p[i]);
    

}

int * merge(int a[],b[],na,nb){
    int i= 0; int j=0; int k=0;
    
    while(i<na && j<nb){
        if (a[i] <= b[j])
            c[k++]=a[i++];
        else
            c[k++]= b[j++];
    }
    while(j<nb){
        c[k++]=b[j++];
    }
    while(i<na){
        c[k++]=a[i++];
    }
    
    return c;

    
}