/*
 * Author:Adxamov Diyorbek
 * Date:07.11.2023
 * Name:data structures
 */

#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include <iostream>
#include <vector>

int main() {
    // Task 1
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Task 1: " << stack.pop() << std::endl;

    // Task 2
    std::vector<int> train = {3, 1, 2};
    auto actions = trainSorting(train);
    std::cout << "Task 2: ";
    for (auto action : actions) {
        std::cout << action.first << " " << action.second << ", ";
    }
    std::cout << std::endl;

    // Task 3
    std::string expression = "2 3 4 * +";
    std::cout << "Task 3: " << evaluatePostfixExpression(expression) << std::endl;

    // Task 4
    std::vector<std::vector<int>> stacks = {{1, 2, 3}, {2, 3, 1}, {3, 1, 2}};
    auto moves = sortContainers(stacks);
    std::cout << "Task 4: ";
    for (auto move : moves) {
        std::cout << move.first << " " << move.second << ", ";
    }
    std::cout << std::endl;

    // Task 5
    std::cout << "Task 5: " << minMovesTowerOfHanoi(8) << std::endl;

    return 0;
}

