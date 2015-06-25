//
//  employeedata.c
//  
//
//  Created by Ryo Kono on 6/26/14.
//
//

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char deptname[10];
    int deptnum;
    
}department;

typedef struct {
    department dept;'
    double salary;
    int id;
} employeedata;

int main(){
    employeedata *e;
    e = (employeedata *)malloc(sizeof(e));
    void update(employeedata *e);
    update(e);
    printf("%d", e->dept.deptnum);
}


void update(employeedata *e){
    int n;
    printf("enter dept number");
    scanf("%d",&n);
    e-> dept.deptnum = n;
}
