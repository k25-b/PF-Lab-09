#include <stdio.h>
int main() {
    int attendance[4][5] = {
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 0, 1}
    };

    int (*p)[5] = attendance;

    for (int i = 0; i < 4; i++) {
        int total = 0;

        printf("Student %d pattern: ", i + 1);

        for (int j = 0; j < 5; j++) {
            int current_day = (*(p + i))[j];

            printf("%d ", current_day);

            if (current_day == 1) {
                total++;
            }
        }

        printf("| Total: %d", total);

        if (total < 3) {
            printf(" (At risk)");
        }

        printf("\n");
    }

    return 0;
}
