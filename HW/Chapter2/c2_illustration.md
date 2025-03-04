# Assignment 1: Order Functions by Growth Rate

## Given Functions:
- \( N \)
- \( \sqrt{N} \)
- \( N^{1.5} \)
- \( N^2 \)
- \( N \log N \)
- \( N \log\log N \)
- \( N \log^2 N \)
- \( N \log(N^2) \)
- \( \frac{2}{N} \)
- \( 2^N \)
- \( 2^{N/2} \)
- \( 37 \)
- \( N^2 \log N \)
- \( N^3 \)

---

## **Ordering by Growth Rate (From Slowest to Fastest)**
### **1️⃣ Constant Functions (O(1))**
- \( 37 \)

### **2️⃣ Negligible Growth (O(1/N))**
- \( \frac{2}{N} \)

### **3️⃣ Logarithmic Growth (O(log N))**
- \( \log\log N \) *(grows slower than log N but faster than constant)*
- \( \log N \)

### **4️⃣ Sublinear Growth (O(N^c), c < 1)**
- \( \sqrt{N} \) *(N^{0.5})*

### **5️⃣ Linear Growth (O(N))**
- \( N \)
- \( N \log\log N \) *(grows slightly faster than N but at a similar rate)*

### **6️⃣ Slightly Superlinear Growth (O(N log N))**
- \( N \log N \)
- \( N \log(N^2) \) *(same as N log N, since log(N²) = 2 log N, just a constant factor difference)*

### **7️⃣ Polynomial Growth (O(N^c))**
- \( N^{1.5} \)
- \( N^2 \)
- \( N^2 \log N \) *(grows slightly faster than N² but same order of growth)*
- \( N^3 \)

### **8️⃣ Exponential Growth (O(2^N))**
- \( 2^{N/2} \) *(grows exponentially but slower than full 2^N)*
- \( 2^N \) *(fastest-growing function in the list)*

---

## **Grouping Functions That Grow at the Same Rate:**
- **Same as Linear:** \( N \) and \( N \log\log N \)
- **Same as N log N:** \( N \log N \) and \( N \log(N^2) \)
- **Same as Quadratic:** \( N^2 \) and \( N^2 \log N \) (since \( \log N \) is a small additive term)

---

## **Final Sorted Growth Order (From Slowest to Fastest)**
```
37 < 2/N < loglogN < logN < sqrt(N) < N ≈ N loglogN < N logN ≈ N log(N^2) 
< N^1.5 < N^2 ≈ N^2 logN < N^3 < 2^(N/2) < 2^N
```

### **Conclusion:**
- **Polynomial functions** grow much faster than **logarithmic and linear functions**.
- **Exponential functions** \( 2^{N/2} \) and \( 2^N \) dominate all polynomial functions.
- **Some functions are equivalent in growth rate** due to logarithmic properties (e.g., \( N \log(N^2) \) ≈ \( N \log N \)).