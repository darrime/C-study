#include <stdio.h>
#include <stdbool.h>

int main() {
	bool i = true;
	int ans = 0;
	while (i == true) {
		printf("���α׷��� �����ұ��? \n");
		printf("�� : 1��\n�ƴϿ� : 2��\n");
		scanf("%d", &ans);
		if (ans == 1) {
			printf("���α׷��� �����մϴ�");
			i = false;
		}
		if(ans == 2) {
			printf("���α׷� ���Ḧ ����մϴ�\n");
		}
	}
	return 0;
}