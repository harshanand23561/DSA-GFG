#include <iostream>

using namespace std;

int second_largest(int a[], int n)
{
    int largest = 0;
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[largest])
        {
            res = largest;
            largest = i;
        }
        else if (a[i] != a[largest])
        {
            if ((res == -1) || (a[i] > a[res]))
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Second Largest In array is : " << a[second_largest(a, n)];

    return 0;
}