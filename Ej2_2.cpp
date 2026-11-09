#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

void ReverseFirstK(queue<int> &values, int k)
{
    if (values.empty() || k <= 0)
    {
        return;
    }

    int n = values.size();
    if (k > n)
    {
        k = n;
    }

    stack<int> auxStack;

    for (int i = 0; i < k; i++)
    {
        auxStack.push(values.front());
        values.pop();
    }

    while (!auxStack.empty())
    {
        values.push(auxStack.top());
        auxStack.pop();
    }

    int resto = n - k;
    for (int i = 0; i < resto; i++)
    {
        values.push(values.front());
        values.pop();
    }
};