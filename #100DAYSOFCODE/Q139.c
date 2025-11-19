// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Role {
    ADMIN = 10,
    USER = 20,
    GUEST = 30
};

int main() {
    enum Role r;

    printf("ADMIN = %d\n", ADMIN);
    printf("USER  = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    
    r = USER;
    printf("\nValue stored in variable r (USER) = %d\n", r);

    return 0;
}
