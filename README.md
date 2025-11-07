# 🚀 push_swap: Sorting Under Constraints

The goal of this project is to sort a list of integers across two stacks (A and B) using the fewest possible operations, from a limited set of 11 instructions.

This project tests not only algorithmic knowledge (such as $O(N \log N)$ vs. $O(N^2)$) but also programmer resilience, as it must adhere to the strict 42 coding ruleset.

## 📜 The Operations

Only the following 11 operations are allowed to manipulate the stacks:

| Operation | Description |
| :--- | :--- |
| **sa** | Swap the first two elements at the top of Stack A. |
| **sb** | Swap the first two elements at the top of Stack B. |
| **ss** | `sa` and `sb` at the same time. |
| **pa** | Push the top element of Stack B to the top of Stack A. |
| **pb** | Push the top element of Stack A to the top of Stack B. |
| **ra** | Rotate Stack A (the top element moves to the bottom). |
| **rb** | Rotate Stack B. |
| **rr** | `ra` and `rb` at the same time. |
| **rra** | Reverse rotate Stack A (the bottom element moves to the top). |
| **rrb** | Reverse rotate Stack B. |
| **rrr** | `rra` and `rrb` at the same time. |

## 🧠 Algorithmic Strategy

The solution employs a hybrid strategy, optimized for different input sizes (`N`).

### 1. Normalization (Ranking)
The first step is "indexing." Raw values (e.g., `-50, 10, 800`) are replaced by their ranks (indices) (`0, 1, 2`). This simplifies the problem to a sequence from 0 to (N-1), enabling the use of bit-based algorithms.

### 2. Small Sorts (N <= 5)
* **N=2:** Solved with a single `sa` (if needed).
* **N=3:** Solved with a "micro-sort" algorithm that never exceeds 2 moves.
* **N=4/5:** Solved by reducing the problem to a `sort_3`. The lowest 1 or 2 ranks (0 and 1) are pushed to Stack B, Stack A (now with 3 nodes) is sorted, and the nodes from B are returned.

### 3. Large Sorts (N > 5): The Radix Sort
To achieve the required performance for large datasets (N=100, N=500), an $O(N \log N)$ algorithm is necessary.

* This project implements the **Radix Sort** (LSD - Least Significant Digit).
* The algorithm iterates "pass by pass" over each bit of the indexes (e.g., 0 to 8 for N=500).
* In each bit-pass, if the bit is `0`, the node is pushed to B (`pb`). If it is `1`, it is rotated in A (`ra`).
* After finishing the iterations on Stack A, B is emptied back into A.
* After the final bit pass, Stack A is perfectly sorted.

## 🚀 How to Use

### 1. Compiling
The project includes a `Makefile` that also builds the required `libft`.
```bash
make

```
### 2. Running
The program accepts a list of integers as arguments.
```bash
# Provide numbers as separate arguments
./push_swap 4 0 3 1 2

# The parser also handles numbers provided as a single string
./push_swap "4 0 3 1 2"

```
The program will output the shortest list of operations required to sort the stack.
