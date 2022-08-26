#include<bits/stdc++.h>
using namespace std;

#define S 50

int main()
{
    int n, i;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b, A, B;

    /* Input */
    cout << "How many data points? " << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
    }

    /* Calculating Required Sum */
    for (i = 1; i <= n; i++)
    {
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i] * x[i];
        sumY = sumY + log(y[i]);
        sumXY = sumXY + x[i] * log(y[i]);
    }

    /* Calculating A and B */
    B = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    A = (sumY - B * sumX) / n;

    /* Transformation of A to a and B to b */
    a = exp(A);
    b = exp(B);

    /* Displaying value of a and b */
    cout << "Values are: a = " << a << " and b = " << b;

    return (0);
}