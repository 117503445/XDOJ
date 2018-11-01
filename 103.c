#include "stdio.h"
int fun(int year){
    if((year%4==0&&year%100!=0)||year%400==0) return 1;
    return 0;
} 
int main()
{
	int y;
	scanf("%d",&y);
        if(fun(y)){
            printf("%d is a leap year.",y);
        }
        else printf("%d is not a leap year.",y);        
}
