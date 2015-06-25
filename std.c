//
//  File.c
//  
//
//  Created by Ryo Kono on 5/31/14.
//
//

#include <stdio.h>
int main(){
    int s = 0;
    int f = 0;
    int b = 1;
    int x = 0;
    int i = 0;
    int max = 0;
    int maxval = 0;
    int start,end;
    int C[100];
    
    scanf("%d", &s);
    scanf("%d", &f);
    start = s;
    end= f;
    
    
    for (i = start; i < end+1; i++ ){
        s = i;
        b = 1;
        printf("%d",s);
    while (s!=1){
        
        
    if (s%2 ==0){
        s = s/2;
        b = b+1;
        
        
    }//if even
    else {
        s = 3*s +1;
        b = b+1;
        
    }// if odd
    }// while

        C[x]= b;
        x = x+1;
    }//for
    printf("\n b is %d\n",b);
    

    max = C[0];
    
    for (i = 1; i< (end-start+1); i++){
        if (C[i] > max){
            max = C[i];
            maxval = i + start ;
        }
                }
    
    printf("%d %d max = %d max value is %d", s,f,maxval,max);

}
