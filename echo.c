#include <stdio.h>

int  main(int argc, char argv[]){

char *ptr;
ptr = argv;

for (char* end = ptr+argc-1; argv < end; ++ptr, --end){
	char temp = *ptr;
	*argv = *end;
	*end = temp;
}
for (int i= argc - 1; i> 0; i--){

printf("%c\n",*ptr--);
}
}

