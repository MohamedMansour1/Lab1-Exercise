#include "function0.h"
#include "function1.h"

// Driver code

int main()
{
int val[] = { 60, 100, 120 };
int wt[] = { 10, 20, 30 };
int W = 50;
int n = sizeof(val) / sizeof(val[0]);
cout << KnapSack(W, wt, val, n);
return 0;
}
// This code is contributed by rathbhupendra
