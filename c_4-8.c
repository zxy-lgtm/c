#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入一个整数");scanf("%d",&no);
	while (no-- > 0){
		putchar('*');
	   putchar('\n');
    }
	return 0;
}
