#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    char star = '*';
    cin >> a >> b;
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << star;
        }
        cout << endl;
    }
    return 0;
}