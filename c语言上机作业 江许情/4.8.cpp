#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade;
	printf("please input your score:");
	scanf("%d",&grade);
	printf("your level is:");
if(grade>=90)
printf("A");
else if(grade>=80)
printf("B");
else if(grade>=70)
printf("C");
else if(grade>=60)
printf("D");
else
printf("E");
	return 0;
}
