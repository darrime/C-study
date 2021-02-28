#include <stdio.h>
#include <stdbool.h>

int main() {
	bool i = true;
	int ans = 0;
	while (i == true) {
		printf("프로그램을 종료할까요? \n");
		printf("예 : 1번\n아니요 : 2번\n");
		scanf("%d", &ans);
		if (ans == 1) {
			printf("프로그램을 종료합니다");
			i = false;
		}
		if(ans == 2) {
			printf("프로그램 종료를 취소합니다\n");
		}
	}
	return 0;
}