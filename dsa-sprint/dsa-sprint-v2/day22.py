# https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1?page=1&category[]=Stack&sortBy=submissions
# logic: we can apply smwhat a similar logic of the histogram problem, where we maintained a stack of increasing bar heights so that we could form a rectangle. but here to form a span, we'd need a non increasing fashion of stock prices. as we iterate over list, we pop elements from stack so that stock price at top of stack <= current price.  if stack is empty, it means, no previous prices > current price. so, the span is the current day index + 1, else span is difference between current day index and top stack's index. 

class Solution:
    def calculateSpan(self, price, n):
        stack = []
        res = [1] * n

        for i in range(n):
            while stack and price[i] >= price[stack[-1]]:
                stack.pop()

            if not stack:
                res[i] = i + 1
            else:
                res[i] = i - stack[-1]

            stack.append(i)

        return res