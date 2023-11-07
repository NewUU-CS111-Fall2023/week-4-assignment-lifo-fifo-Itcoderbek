#include "task_3.h"
#include <stack>
#include <sstream>

int evaluatePostfixExpression(std::string expression) {
    std::stack<int> s;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            if (token == "+") s.push(operand1 + operand2);
            else if (token == "-") s.push(operand1 - operand2);
            else if (token == "*") s.push(operand1 * operand2);
        } else {
            s.push(std::stoi(token));
        }
    }

    return s.top();
}

