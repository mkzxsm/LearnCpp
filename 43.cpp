#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool disp_full = 0;
    cout << "Diplay full?";
    cin >> disp_full;
    switch (disp_full)
    {
        case 0:
        if (n>0)
        {
            for (int i = 0; i<n; i++)
            {
                for (int j = 1; j <= n - i; j++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "#";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i<-n; i++)
            {
                for (int j = 0; j <= i; j++) {
                    cout << "#";
                }
                cout << endl;
            }
        }
        break;
        case 1:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "#";
            }
            cout << " ";
            for (int j = 0; j <= i; j++) {
                cout << "#";
            }
            cout << endl;
        }
    }
    return 0;
}
