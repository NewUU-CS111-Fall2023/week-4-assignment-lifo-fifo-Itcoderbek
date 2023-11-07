#include "task_4.h"
#include <stack>
#include <algorithm>

std::vector<std::pair<int, int>> sortContainers(std::vector<std::vector<int>> stacks) {
    int N = stacks.size();
    std::vector<std::stack<int>> containerStacks(N);
    std::vector<std::pair<int, int>> actions;

    for (int i = 0; i < N; ++i) {
        for (int j = stacks[i].size() - 1; j >= 0; --j) {
            containerStacks[i].push(stacks[i][j]);
        }
    }

    for (int i = N - 1; i >= 0; --i) {
        while (!containerStacks[i].empty() && containerStacks[i].top() == i + 1) {
            containerStacks[i].pop();
        }
        if (containerStacks[i].empty()) continue;

        int j = 0;
        while (j < N && (containerStacks[j].empty() || containerStacks[j].top() != i + 1)) {
            ++j;
        }
        if (j == N) return {{0, 0}};

        while (!containerStacks[j].empty() && containerStacks[j].top() == i + 1) {
            containerStacks[i].push(containerStacks[j].top());
            containerStacks[j].pop();
            actions.push_back({j + 1, i + 1});
        }
    }

    return actions;
}

