#include <stdio.h>
int main() {
    int a, b;
    char op;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if (b != 0) printf("Result = %d\n", a / b);
            else printf("Division by zero not allowed\n");
            break;
        case '%': 
            if (b != 0) printf("Result = %d\n", a % b);
            else printf("Division by zero not allowed\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
