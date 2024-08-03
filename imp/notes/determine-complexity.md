# How to determine the solution of a problem by looking at its constraints?

*By eanacra, 9 years ago, In English*

By looking at the constraints of a problem, we can often "guess" the solution.

### Common time complexities

Let **n** be the main variable in the problem.

- If **n ≤ 12**, the time complexity can be **O(n!)**.
- If **n ≤ 25**, the time complexity can be **O(2^n)**.
- If **n ≤ 100**, the time complexity can be **O(n^4)**.
- If **n ≤ 500**, the time complexity can be **O(n^3)**.
- If **n ≤ 10^4**, the time complexity can be **O(n^2)**.
- If **n ≤ 10^6**, the time complexity can be **O(n log n)**.
- If **n ≤ 10^8**, the time complexity can be **O(n)**.
- If **n > 10^8**, the time complexity can be **O(log n)** or **O(1)**.

### Examples of each common time complexity

- **O(n!)** [Factorial time]: Permutations of 1 ... n
- **O(2^n)** [Exponential time]: Exhaust all subsets of an array of size n
- **O(n^3)** [Cubic time]: Exhaust all triangles with side length less than n
- **O(n^2)** [Quadratic time]: Slow comparison-based sorting (e.g., Bubble Sort, Insertion Sort, Selection Sort)
- **O(n log n)** [Linearithmic time]: Fast comparison-based sorting (e.g., Merge Sort)
- **O(n)** [Linear time]: Linear Search (Finding maximum/minimum element in a 1D array), Counting Sort
- **O(log n)** [Logarithmic time]: Binary Search, finding GCD (Greatest Common Divisor) using Euclidean Algorithm
- **O(1)** [Constant time]: Calculation (e.g., Solving linear equations in one unknown)

### Explanations based on Codeforces problems

- **255D Mr. Bender and Square**  
  Observe that **1 ≤ n, c ≤ 10^9**. Referring to the information above, the program's time complexity should be either **O(log n)** or **O(1)**. Since no **O(1)** solution exists, we conclude that binary search must be used.

- **580B Kefa and Company**  
  In this problem, **1 ≤ n ≤ 10^5**, which suggests that the time complexity can be either **O(n log n)** or **O(n)**. It is quite obvious that sorting is required. Therefore, **O(n log n)** is the correct solution for this problem.

- **583B Robot's Task**  
  Notice that **n** is very small (**1 ≤ n ≤ 1000**) in this problem. It means that a **O(n^2)** solution can solve it. We simply need to simulate the robot's moves.

I hope that this can help you figure out the solution to some problems quicker :)

**Note:** The above method may not always work for all problems. Some may require algorithms that have complex time complexities, while in some problems like **591B Rebranding**, the range of **n** does not match the time complexity of the "optimal" solution. (**1 ≤ n, m ≤ 200,000** suggests that the time complexity is **O(n log n)** or **O(n)** but the time complexity of the solution is actually **O(1)**.)

References:
- [Codeforces Blog Post](https://codeforces.com/blog/entry/21344)
- [LinkedIn Post](https://www.linkedin.com/posts/aayyushi-jain_how-to-guess-the-solution-for-a-dsa-problem-activity-7209389517873512448-_IBq?utm_source=share&utm_medium=member_desktop)