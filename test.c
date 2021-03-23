#include<stdio.h>
#include<Windows.h>

int main(){
	for (int i = 1; i < 10; i++){
		for (int x = 1; x <= i; x++){
			int result = x*i;
			printf("%d*%d=%d ", x, i, result);
			if (x == i){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}
