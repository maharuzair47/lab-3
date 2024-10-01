#include "Stack.h"
#include <iostream>

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    cout << "Top of stack: " << s.top() << std::endl;
    s.pop();
    s.pop();
    s.display();

    return 0;
}