#include <stdio.h>
#include<stdlib.h>
struct node {
int x; 
struct node *left;
struct node *right;
};

int main(){
struct node *left1;
struct node *right1;
struct node *root;
root = (struct node *) malloc(sizeof(struct node));
left1 = (struct node *) malloc(sizeof(struct node));
right1 = (struct node *) malloc(sizeof(struct node));
root -> x =  1;
left1 -> x = 2;
right1 -> x = 3;

root -> left = left1;
root -> right = right1;

printf("%d",root -> x);
printf("%d",left1 -> x);
printf("%d",right1 -> x);
}

