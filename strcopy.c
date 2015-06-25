//
//  File.c
//  
//
//  Created by Ryo Kono on 5/27/14.
//
//

#include <stdio.h>
#include <string.h>
int main(){
    int i = 0;
    char a[100];
    char b[100];
    scanf("%s",a);
    for (i = 0;i < strlen(a); i++){
        b[i] = a[i];

    }
    b[i] = '\0';
    printf("%s",b);
}
