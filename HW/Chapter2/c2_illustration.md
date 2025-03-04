# Assignment 1: Order Functions by Growth Rate

## Given Functions:
The following functions are ordered by their **growth rate**, from the slowest-growing to the fastest-growing:

1. \( 37 \) *(Constant time complexity)*
2. \( \frac{2}{N} \) *(Decreasing function, asymptotically approaching zero)*
3. \( \sqrt{N} \) *(Sublinear growth)*
4. \( N \) *(Linear growth)*
5. \( N \log \log N \)
6. \( N \log N \)
7. \( N \log^2 N \)
8. \( N^{1.5} \) *(Between linear and quadratic growth)*
9. \( N^2 \) *(Quadratic growth)*
10. \( N^2 \log N \)
11. \( N^3 \) *(Cubic growth)*
12. \( 2^{N/2} \) *(Exponential growth, slower than \( 2^N \))*
13. \( 2^N \) *(Exponential growth)*

---

## **Complexity Table**

| Function | Complexity Notation | Growth Type |
|----------|--------------------|-------------|
| \( 37 \) | \( O(1) \) | Constant |
| \( \frac{2}{N} \) | \( O(1/N) \) | Decreasing |
| \( \sqrt{N} \) | \( O(\sqrt{N}) \) | Sublinear |
| \( N \) | \( O(N) \) | Linear |
| \( N \log \log N \) | \( O(N \log \log N) \) | Slightly superlinear |
| \( N \log N \) | \( O(N \log N) \) | Superlinear |
| \( N \log^2 N \) | \( O(N \log^2 N) \) | Superlinear |
| \( N^{1.5} \) | \( O(N^{1.5}) \) | Between linear and quadratic |
| \( N^2 \) | \( O(N^2) \) | Quadratic |
| \( N^2 \log N \) | \( O(N^2 \log N) \) | Slightly super-quadratic |
| \( N^3 \) | \( O(N^3) \) | Cubic |
| \( 2^{N/2} \) | \( O(2^{N/2}) \) | Exponential |
| \( 2^N \) | \( O(2^N) \) | Exponential |

---

## **Functions That Grow at the Same Rate**
- \( N \log^2 N \) and \( N \log N \) are both **superlinear**, but \( N \log^2 N \) grows slightly faster.
- \( N^2 \) and \( N^2 \log N \) are both **quadratic**, but \( N^2 \log N \) grows slightly faster.
- \( 2^N \) and \( 2^{N/2} \) are both **exponential**, but \( 2^N \) grows significantly faster.

This ordering correctly follows **asymptotic complexity analysis** principles.

---

## **Growth Rate Visualization**
```mermaid
graph LR;
    A[Constant: O(1)] --> B[Decreasing: O(1/N)]
    B --> C[Sublinear: O(sqrt(N))]
    C --> D[Linear: O(N)]
    D --> E[Slightly Superlinear: O(N log log N)]
    E --> F[Superlinear: O(N log N)]
    F --> G[Superlinear: O(N log^2 N)]
    G --> H[Quadratic: O(N^2)]
    H --> I[Slightly Super-Quadratic: O(N^2 log N)]
    I --> J[Cubic: O(N^3)]
    J --> K[Exponential: O(2^(N/2))]
    K --> L[Exponential: O(2^N)]