#include <stdio.h>
int main()
{
	int appleCount;
	char appleLetter[10];
	float appleWeight;
	printf("사과의 이름을 입력하세요 >> ");
	scanf("%s", &appleLetter); // &은 주소(형식) 지정자  
	printf("사과의 개수를 입력하세요 >> ");
	scanf("%d", &appleCount);
	printf("사과의 무게를 입력하세요 >> ");
	scanf("%f", &appleWeight);
	printf("이름: %s\n", appleLetter);
	printf("개수: %d 개\n", appleCount);
	printf("무게: %.1f g", appleWeight); // %.1 은 소숫점 1자리까지만 표시
	return 0; 
}
