# Fibonacci number
## Introduction
- Fibonacci numbers are sets of numbers which follow a special pattern. 

   +  If there are total n terms of the number in the series, the n-th term equals to the n-1th term plus the n-2th term. We can use this pattern to find the fibonacci number in the term we want. 
## Method used in getting fibonacci number
  - We always say fibonacci number is a great example to show the essence of recursion, so one of the best ways to calculate the nth term fibonacci number is to use recursion. 
 
### Use regular recursion
  - The central idea of regular recursion is to call to recursion functions (n-1th term and n-2th term) to get the answer we want.
  However, there is a one serious problem.
    - We know the time complexity using this way is O(2^n), which is huge. So, if n equals to a really huge number, like 100, the computer will take too much time to process. So, there is another way to improve the efficiency.

### Use tail-recursion
  - One important advantage of tail-recursion in getting fibonacci number is that we only have to call the function once. Therefore, we could avoid the case that some numbers will take too much time to process.
  
### Another trick 
  - There is another way to figure out the fibonacci number by calculating the eigenvalues which we learned in linear algebra.  