#include <stdio.h>

int main() {
	int i=0;
	scanf("%i",&i);
	if(i>90)printf("A");
	if(i>=80&&i<=90)printf("B");
	if(i>=70&&i<80)printf("C");
	if(i>=60&&i<70)printf("D");
	if(i<60)printf("E");
	return 0;
}
