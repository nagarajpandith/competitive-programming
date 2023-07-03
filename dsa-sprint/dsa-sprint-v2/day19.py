# https://www.codingninjas.com/studio/problems/1058184?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

# optimised approach: because bruteforce didn't pass all cases, time limit exceeded
# (i had to use hint from codingninjas which suggested using stack)

# logic: we traverse histogram array once, and for each bar, we compare its height with the height of the bar at the top of the stack. if current bar height < height of bar at stack top, then it means this one cannot extend the rectangle formed by previous bars. so pop the bar and calculate area using popped bar as min height. here width will be distance between current index i and top stack bar index. if stack was empty, width would be just "i" because all previous bars have heights >= current bar. we also have to keep track of max area here by checking which is bigger, globally max area or current caclulated area. push current index to stack. 

def largestRectangle(arr):
    stack = []
    max_area = 0
    n = len(arr)

    for i in range(n):
        while stack and arr[i] < arr[stack[-1]]:
            height = arr[stack.pop()]
            width = i if not stack else i - stack[-1] - 1
            area = height * width
            max_area = max(max_area, area)
        stack.append(i)

    while stack:
        height = arr[stack.pop()]
        width = n if not stack else n - stack[-1] - 1
        area = height * width
        max_area = max(max_area, area)

    return max_area