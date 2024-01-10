#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX], item, ch, top=-1, status=0;
void push(int stack[],int item)
{
if(top==(MAX-1))
printf("\nOverflow\n");
else
stack[++top]=item;
status++;
}
int pop()
{
if(top==-1)
printf("\nUnderflow\n");
else
return stack[top--];
status--;
}
void palindrome(int stack[])
{
int temp, count=0;
temp=status;
for(int i=0;i<temp;i++)
{
if(stack[i]==pop())
count++;
}
if(count==temp)
printf("Palindrome\n");
else
printf("not palindrome\n");
}
void display(int stack[])
{
    if(top==-1)
printf("\nstack is empty\n");
else
for(int i=top;i>=0;i--)
{
printf("|%d|\n",stack[i]);
}
}
void main()
{
int ch;
while(ch<6)
{
printf("\n 1.push\t 2.pop\t 3.palindrome\t 4.display\t 5.exit\n");
printf("Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the item: ");
scanf("%d",&item);
push(stack,item);
break;
case 2: printf("popped value = %d",pop());
break;
case 3: palindrome(stack);
break;
case 4: display(stack);
break;
case 5: exit(0);
default: printf("Invalid Choice\n");
break;
}
}
}