#include <iostream>
#include "function0.h"
using namespace std;
int knapSack(int w, int wt[], int val[], int n)
{
if(n== 0 || w == 0) 
{return0;};
if(wt[n-1] > w)
return knapSack(w, wt, val, n-1);
else 
return max(val[n-1] + knapSack(w-wt[n-1], wt, val, n-1), knapSack(w, wt, val, n-1));
}
