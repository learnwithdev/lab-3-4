#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Fibonacci Series: 0, 1");
    }
    //if (n >= 2) {
      //  printf(", 1");
    //}
    
    int a = 0, b = 1, next;

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    
    printf("\n");
}

