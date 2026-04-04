#include <stdio.h>
int main()
{
	char t;
	printf("다운에 동의 하십니까? [y/n] >> ");
	scanf(" %c", &t); // %c 앞에 공백시 공백, 엔터 다 무시  
	if(t == 'y')
	{
		printf("동의");
	}	
	else if(t == 'n')
	{
		printf("비동의");
	}
	else
	{
		printf("miss");
	}
}
