#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

void MoveMaximumToBottom(stack<int> &values)
{
    if (values.empty() || values.size() == 1)
    {
        return;
    }
    stack<int> aux;
    int maxVal = values.top();
    while (!values.empty())
    {
        if (values.top() > maxVal)
        {
            maxVal = values.top();
        }
        aux.push(values.top());
        values.pop();
    }
    bool movMax = false;
    while (!aux.empty())
    {
        int current = aux.top();
        aux.pop();

        if (current == maxVal && !movMax)
        {
            movMax = true;
        }
        else
        {
            values.push(current);
        }
    }
    while (!values.empty())
    {
        aux.push(values.top());
        values.pop();
    }
    values.push(maxVal);

    while (!aux.empty())
    {
        values.push(aux.top());
        aux.pop();
    }
};