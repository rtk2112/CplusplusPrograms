//
//  io.c
//  
//
//  Created by Ryo Kono on 8/17/14.
//
//

#include <stdio.h>

#include <syscalls.h>

int main()
{
    char buf[BUFSIZ];
    int n;
    
    while (( n = read(0, buf, BUFSIZ)) >0)
        write(1, buf, n);
    return 0;
}