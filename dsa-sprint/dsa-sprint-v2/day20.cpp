// https://leetcode.com/problems/min-stack/
// constraint: use STL

// logic: we maintain 2 stacks, one for storing all elements and one more where top element is minimum element. so, while pushing we check if the incoming value is <= current minimum (min stack's top), if it is then push that val to minStack which will become new minimum. while popping, we check if the element to be popped is current minimum, if it is, then pop minStack's top as well. for getMin, we return minStack's top.

#include <stack>

class MinStack {
public:
    stack<int> s;
    stack<int> minStack;

    MinStack() {
    }

    void push(int val) {
        s.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minStack.top();
    }
};
