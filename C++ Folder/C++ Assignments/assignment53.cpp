// 1. What is the time, and space complexity of the following code:
// int a = 0, b = 0;
// for (i = 0; i < N; i++)
// {
//     a = a + rand();
// }
// for (j = 0; j < M; j++)
// {
//     b = b + rand();
// }
ANSWER => O(n)

// 2. What is the time complexity of the following code:
// int a = 0;
// for (i = 0; i < N; i++)
// {
//     for (j = N; j > i; j--)
//     {
//         a = a + i + j;
//     }
// }
ANSWER => O(n^2)

// 3. What is the time complexity of the following code:
// int i, j, k = 0;
// for (i = n / 2; i <= n; i++)
// {
//     for (j = 2; j <= n; j = j * 2)
//     {
//         k = k + n / 2;
//     }
// }
ANSWER => O(nlogn)

// 4. What is the time complexity of the following code :
// void fun(int n)
// {
//     for (int i = 0; i < n / 2; i++)
//         for (int j = 1; j + n / 2 <= n; j++)
//             for (int k = 1; k <= n; k = k * 2)
//                 cout << "Prateek Jain";
// }
ANSWER => O(n^2logn)

// (problem 5 to 10 each of the following recurrences, give an expression for the
// runtime T (n) if the recurrence can be solved with the Master Theorem. )
// 5. T (n) = 3T (n/3) + n/2
ANSWER => O(n^log3(base 3)logn) i.e. O(nlogn)

// 6. T (n) = 6T (n/3) + n^2log n
ANSWER => O(n^2logn)

// 7. T (n) = 4T (n/2) + n/ log n
ANSWER => O(n^2)

// 8. T (n) = 64T (n/8) − n^2log n
ANSWER => O(n^2log^2n)

// 9. T (n) = 7T (n/3) + n^2
ANSWER => O(n^2)

// 10. T (n) = 4T (n/2) + log n
ANSWER => O(n^2)