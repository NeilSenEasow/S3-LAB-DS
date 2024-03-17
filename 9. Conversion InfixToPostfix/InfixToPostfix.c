#include<stdio.h>

char stack[20];
int top = -1;

void push(char x)
{
    top=top+1;
    stack[top] = x;
}

char pop()
{
    if(top == -1)
       return -1;
    else{
        char x=stack[top];
        top=top-1;
        return x;
    }

}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

main()
{
    int e;
    char exp[20];
    char  x;
    int i=0;
    stack[++top]='(';
    printf("Enter the expression :: ");
    scanf("%s",exp);
    for( e = exp ; exp[i] != '\0' ; e++ )
    {
        if(isalnum(exp[i]))
            printf("%c",exp[i]);
        else if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(exp[i]))
                printf("%c",pop());
            push(exp[i]);
        }
       i++;
    }
    while(top != 0)
    {
    printf("%c",pop());
    }
}


//e = exp;
//while(exp[i] != '\0')
