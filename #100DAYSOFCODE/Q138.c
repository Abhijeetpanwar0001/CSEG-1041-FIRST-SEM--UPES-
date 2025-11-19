// Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT   
};

int main() {
    enum Role r;

    
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("All Roles:\n");

    for (r = ADMIN; r < ROLE_COUNT; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
