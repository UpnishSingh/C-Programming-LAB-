#include<stdio.h>
void pink();
int x=4;
void main()
{
     pink();
     pink();
     pink();
}
void pink()
{
    
    printf("%d",x);
    x=x+5;

}