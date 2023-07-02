#include <iostream>

using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int X, Y;
        cin >> X >> Y;
        cout << X - Y << endl;
    }

    return 0;
}
