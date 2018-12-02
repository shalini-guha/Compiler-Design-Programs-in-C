#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top=-1;
typedef struct tree{
	struct tree *left,*right;
	char val;
}tree;
tree* st[50];
void push(tree* ch)
{
	top++;
	st[top]=ch;
}
tree* pop()
{
	tree *val = st[top];
	top--;
	return val;
}
int isOperator(char ch)
{
	if(ch=='+' || ch=='/' || ch=='%' || ch=='*' || ch=='-')
	return 1;
	return 0;	
}
tree* newNode(char val)
{
	tree* node = (tree*)malloc(sizeof(tree));
	node->left = NULL;
	node->right = NULL;
	node->val = val;
	return node;
}
void inorder(tree* t)
{
	if(t) 
    { 
        inorder(t->left); 
        printf("%c ", t->val); 
        inorder(t->right); 
    } 
}
tree* constructTree(char *postfix)
{
	tree *t,*t1,*t2;
	int i;
	for(i=0;postfix[i]!='\0';i++)
	{
		if(!isOperator(postfix[i]))
		{
			t = newNode(postfix[i]);
			push(t);
		}
		else
		{
			t = newNode(postfix[i]);
			t1 = pop();
			t2 = pop();
			t->left = t2;
			t->right = t1;
			push(t); 
		}
	}
	return t;
}
int main() 
{ 
    char postfix[] = "ab+ef*g*-"; 
    tree* r = constructTree(postfix); 
    printf("infix expression is \n"); 
    inorder(r); 
    return 0; 
} 
