#include <stdio.h>

int main(){
	int n;
	printf("Enter the number of even numbers: ");
	scanf("%d", &n);

	for (int i=1; i<=n*2; i++){
		if (i%2==0){
			printf("%d,", i);
		}
	}
	printf("\n");
}
