#include <iostream> 
using namespace std;
int n;
struct Aircraft{ 
    int m;
    int d;
};

void Shell(Aircraft *a, int n)
{
    int k = n / 2;
    while (k > 0)
    {
        for (int i = 1; i < n - k + 1; i++)
        {
            int j = i;
            while (j >= 0 )
            {
                if (a[j].d > a[j + k].d)
                {
                    int buf = a[j].d;
                    a[j].d = a[j + k].d;
                    a[j + k].d = buf;
                    int f = a[j].m;
                    a[j].m = a[j + k].m;
                    a[j + k].m = f;
                }
                else
                    j = -1;
            }
        }
        k = k / 2;
    }
}

int main()
{
    cout << "Enter number of flights: "<< endl;
    cin >> n;
    Aircraft *p = new Aircraft[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Aircraft registration number: "<< endl;
        cin >> p[i].m;
        cout << endl;
        cout << "Enter arrival time:" << endl;
        cin >> p[i].d;
    }
    Shell(p, n);
    cout << "Sorted array: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Aircraft " << i << "Number"
             << " " << p[i].m << " ";
        cout << "Arrival time:"
             << " " << p[i].d << endl;
    }
    return 0;
}
