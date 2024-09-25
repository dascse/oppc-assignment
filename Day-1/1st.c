#include <stdio.h>
#include <string.h>

int linearsearch(char stops[][20], int numstops, const char* target) {
    int i;
    for (i = 0; i < numstops; i++) {
        if (strcmp(stops[i], target) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int numstops, i;
    printf("Enter the number of stops: ");
    scanf("%d", &numstops);

    char stops[numstops][20];
    printf("Enter the names of the stops:\n");
    for (i = 0; i < numstops; i++) {
        scanf("%s", stops[i]);
    }
}
