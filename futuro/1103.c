#include <stdio.h>

int main() {
    while (1) {
        int hora1, min1, hora2, min2;
        int minf;

        scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2);

        if (!hora1 && !min1 && !hora2 && !min2)
            break;

        if (hora1 > hora2 || hora1 == hora2 && min1 > min2)
            hora2 += 24;

        minf = (hora2*60 + min2) - (hora1*60 + min1);

        printf("%d\n", minf);
    }

    return 0;
}