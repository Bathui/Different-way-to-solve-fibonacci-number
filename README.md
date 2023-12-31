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
  - One significant advantage using this trick is that we could effectively calculate the huge fibo numbers.
  - There are some background knowledge and central ideas of this trick.

#### Diagnolization of the matrix
$AX = XΛ$
#### Central idea
1. I decided to put two fibonacci numbers (we note as $F_k$ and $F_{k+1}$) involved in the calculation into a matrix. It is like the following:

$$u_k = \begin{bmatrix}
  F_{k+1} \\
  F_k \\
\end{bmatrix}
$$

2. If we want to get a number that the term is bigger than one, we have to add up previous two terms to get the answer.
The matrix $A$ does this job.

$$A = \begin{bmatrix}
  1 & 1 \\
  1 & 0 \\
\end{bmatrix}
$$

3. We can know that

$$
u_{k+1} = Au_k  
$$

4. So, it is easy to know that if 

$$u_0 = \begin{bmatrix}
  1 \\
  0 \\
\end{bmatrix}
$$

then, 

$$u_n = A^nu_0$$

5. Right now, we have to look back a little bit. We said we want to connect fibonacci number with eigenvalues. There is an essential decomposition. We want to make $A$ be decomposed to $XΛX^{-1}$. Here is the formula:

$$
A = XΛX^{-1}
$$

6. So, we could easily get

$$A^nu_0 = XΛ^nX^{-1}u_0$$

7. We could also write $u_0$ as $Xc$, which could help us cancel $X^{-1}$ out, then

$$
A^nu_0 = XΛ^nc
$$

  - If we expand the formula, it should be like this

$$
XΛ^nc = \begin{bmatrix}
  \\
  x_1 &\cdots &x_n\\
  \\
\end{bmatrix}
\begin{bmatrix}
  (λ_1)^n \\
  &\ddots \\
  &  & (λ_n)^n
  \\
\end{bmatrix}
\begin{bmatrix}
  c_1\\
  \vdots\\
  c_n
  \\
\end{bmatrix}
$$

  - Then, if $k = n$ we could wirte them as 
  
  $$u_k = c_1(λ_1)^kx_1 + c_2(λ_2)^kx_2$$

    - we only need to write two terms because there are only two eigenvalues for matrix A.
8. By using the way we learned in linear algebra, get eigenvectors and eigenvalues of the matrix $A$ are not difficult. 
$$λ_1 ≈ 1.618$$
$$λ_2 ≈ -0.618$$

$$
x_1 = \begin{bmatrix}
  λ_1 \\
  1   \\
\end{bmatrix}
$$

$$
x_2 = \left[\begin{array}{cc}
λ_2 \\
1
\end{array}\right]
$$
1. If we want to use the formula in step 7, we should know the magnitude of c, we could get the answer during the process when we get the eigenvectors. It should be $1/(λ_1-λ_2)$
2.   This is the last step. Plug what we got to the formula:
$$u_k=\frac{(λ_1)^nx_1-(λ_2)^nx_2}{λ_1-λ_2}$$
    
    - We only have to plug the exact number of two λ's and x's to the formula.
## Program part
1. I used recursion and tail recursion to write the program of getting n-th term of fibonacci number, which is in recursion.c and tailRecursion.c.

2. The method of using eigenvalues is in the file eigenvalues.c. It seems a little confusing for some parts, but it is just a process of pluging exact numbers. The central idea is involved in the derivation part in last section.  
