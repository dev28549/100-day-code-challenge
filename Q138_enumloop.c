#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT
};

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    const char *roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    int i;

    printf("--- User Roles and Integer Values ---\n");
    
    for (i = ADMIN; i < ROLE_COUNT; i++) {
        printf("Role: %s, Value: %d\n", roleNames[i], i);
    }

    return 0;
}