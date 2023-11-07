#include "task_5.h"

int minMovesTowerOfHanoi(int N) {
    if (N == 1) {
        return 1;
    } else {
        return 2 * minMovesTowerOfHanoi(N - 1) + 1;
    }
}

