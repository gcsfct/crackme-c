#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        int k = 1005;
        int sum = 0;

        for (int i = 0; i < strlen(argv[1]); i++)
            sum += (int) argv[1][i];

        if (sum == k)
            printf("Access granted!");
        else
            printf("Acess denied!");

    } else {
        printf("Usage: %s <key>\n", argv[0]);
    }

    return 0;
}
