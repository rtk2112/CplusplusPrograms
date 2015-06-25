//
//  selectsort.c
//  
//
//  Created by Ryo Kono on 6/13/14.
//
//

#include <stdio.h>
int main(){
    int b = 0;
    int n = 0;
    int a[50];
    int j = 0;
    int min= 0;
    int i =0;
    int temp=0;
    scanf("%d",&n);
    for (i = 0; i< n; i++){
        printf("Please enter numbers.");
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i<n; i++){
        min = i;
        for(j = i+1;j<n;j++){
            if (a[j] <= a[min]){
                min = j;
            } //if
        }//inner for
        temp = a[i];
        a[i] = a[min];
        a[min]=temp;
    }//outer for
    for (i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}
