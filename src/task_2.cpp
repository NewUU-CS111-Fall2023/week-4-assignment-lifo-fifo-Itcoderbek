#include "task_2.h"
#include <stack>
#include <algorithm>

std::vector<std::pair<int, int>> trainSorting(std::vector<int> train) {
    std::vector<std::pair<int, int>> actions;
    std::stack<int> deadEnd;
    int N = train.size();
    int nextCar = 1;

    for (int i = 0; i < N; ++i) {
        deadEnd.push(train[i]);
        actions.push_back({1, 1});

        while (!deadEnd.empty() && deadEnd.top() == nextCar) {
            deadEnd.pop();
            actions.push_back({2, 1});
            ++nextCar;
        }
    }

    if (!deadEnd.empty()) {
        actions.clear();
        actions.push_back({0, 0});
    }

    return actions;
}

std::string checkBrackets(std::string brackets) {
    std::stack<char> s;
    for (char c : brackets) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else {
            if (s.empty()) {
                return "No";
            }
            char top = s.top();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return "No";
            }
            s.pop();
        }
    }
    return s.empty() ? "Yes" : "No";
}

