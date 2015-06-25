#include <stdio.h>
void do_x(int *a, int *b)
{
   *a=*a+1;
   *b=*b+1;
   
   printf("%d\n",*a);
   printf("%d\n",*b);
	
}
int main(){

int a=10;
int b=10;
do_x(&a,&b);
printf("%d\n",a);
printf("%d\n",b);

 

}
