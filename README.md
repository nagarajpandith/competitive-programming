# Competitive Programming Submissions

A repo to store my successful submissions in Contests on different online judges.

## Table of Contents

1. [Leetcode Submissions](https://github.com/nagarajpandith/competitive-programming/tree/master/leetcode)
2. [DSA-Sprint](https://github.com/nagarajpandith/competitive-programming/tree/master/dsa-sprint)
3. [Sushiksha-CP](https://github.com/nagarajpandith/competitive-programming/tree/master/sushiksha-cp)
4. [My Notes](#my-notes)

## My Notes

### 01. Arrays

- list of same type elements, a bucket of similar elements
- values are stored in contiguous locations
- accessing through index which starts from 0
- index goes from 0 to (n-1) for an n-sized array
- initialisation→ eg: int a[5] = {1,2,3,4,5}
- garbage values if just declared → int a[5];
- 0 at all locations → int a[5] = {0}
- by default, all will be initialised with 0’s. the indexes out of bound will be having garbage values.
- fill_n → filling an array/any iterable container with some specific value (for cases apart from 0)

```cpp
//header file
#include <bits/stdc++.h>

// syntax
void fill_n(iterator begin, int n, type value);

//example
int array[100];
fill_n(array, 100, 1); //fill with 1
```

- **Parameters**:
  - **begin**: The function will start filling values from the position pointed by the iterator *begin*.
  - **n**: This parameter denotes the number of positions to be filled starting from the position pointed by first parameter *begin*.
  - **value**: This parameter denotes the value to be filled by the function in the container.
- calculating array size → int size = sizeof (arrayName) / sizeof(int);
- but still why pass size manually to printArray() function? because if an array a[15] is initialised with just 2 elements {1, 2} then the calculated size would be 15 instead of 2
- printing using for each loop
  ```cpp
  // https://www.geeksforgeeks.org/g-fact-40-foreach-in-c-and-java/
  for (int i:a){
  cout<<i<<endl;
  }
  ```
- bad practice → int arr[userInputtedSize]; instead declare a fixed size, maybe int arr[1000];
- INT_MIN and INT_MAX constants
- when you pass arrayname on function, it passes base address. so a reference is created instead of a copy in the function which uses this.
