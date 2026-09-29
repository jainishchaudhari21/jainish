#include <stdio.h>
#define SIZE  5

int stack[SIZE];
int top = -1;
int i;

void push(int value)
{
if(top == SIZE - 1)
{
printf("Stack is Full!!!\n");
}
else
{
top++;
stack[top] = value;
printf("%d pushed into the stack...\n", value);
}
}

void pop()
{
if(top == -1)
{
printf("Stack is Empty!!!\n");
}

else
{
printf("%d popped from the stack...\n", stack[top]);
top--;
}
}

void display()
{
if(top == -1)
{
printf("Stack is Empty!!!\n");
}
else
{
printf("Stack elements are:\n");
for(i = top; i >= 0; i--)
{
printf("%d\n", stack[i]);
}
}
}

int main(){
int choice, value;

while (1)
{
printf("\n--- Stack Menu---\n");
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice){
case 1:
printf("Enter value to push: ");
scanf("%d", &value);
push (value);
break;

case 2:
pop();
break;

case 3:
display();
break;
case 4:
printf("Exiting.....\n");
return 0;

default:
printf("Invalid Choice! Try Again..\n");

}
}
}
