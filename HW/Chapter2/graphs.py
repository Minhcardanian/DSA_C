import numpy as np
import matplotlib.pyplot as plt

# Define range of N values (ensure N > 1 to avoid log(0))
N = np.linspace(2, 20, 100)

# Define functions
constant = np.ones_like(N) * 37
decreasing = 2 / N
sqrt_N = np.sqrt(N)
linear = N
n_loglogn = N * np.log(np.log(N))  # Ensure N > 1 to avoid log(0)
n_logn = N * np.log(N)
n_log2n = N * (np.log(N)**2)
n_1_5 = N**1.5
quadratic = N**2
n2_logn = N**2 * np.log(N)
cubic = N**3
exp_half = 2**(N/2)
exp_n = 2**N

# Plot all functions
plt.figure(figsize=(10, 6))
plt.plot(N, constant, label=r"$O(1)$")
plt.plot(N, decreasing, label=r"$O(1/N)$")
plt.plot(N, sqrt_N, label=r"$O(\sqrt{N})$")
plt.plot(N, linear, label=r"$O(N)$")
plt.plot(N, n_loglogn, label=r"$O(N \log \log N)$")
plt.plot(N, n_logn, label=r"$O(N \log N)$")
plt.plot(N, n_log2n, label=r"$O(N \log^2 N)$")
plt.plot(N, n_1_5, label=r"$O(N^{1.5})$")
plt.plot(N, quadratic, label=r"$O(N^2)$")
plt.plot(N, n2_logn, label=r"$O(N^2 \log N)$")
plt.plot(N, cubic, label=r"$O(N^3)$")
plt.plot(N, exp_half, label=r"$O(2^{N/2})$", linestyle='dashed')
plt.plot(N, exp_n, label=r"$O(2^N)$", linestyle='dashed')

# Set log scale for better visualization
plt.yscale('log')
plt.xlabel("N")
plt.ylabel("Function Growth")
plt.title("Growth Rate of Functions")
plt.legend()
plt.grid(True)

# Show plot instead of saving
plt.show()
