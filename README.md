# A Recursive Fibonacci Sequence In C

Fib.c is a pretty simple program to recursively find the
fibonacci number, Fn, at a specific point in the sequence when prompted by the user.

**Note: F(40) upwards are likely to experience a significant slowdown in output due to computation time.**

The general algorithm is:

 * If n < 2, Fn = n.
 * Otherwise, recursively call F(n-1) + F(n-2)