#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    cout << a << endl;

    a += 1;
    cout << a << endl;

    a += 1;
    cout << a << endl;

    a++;
    cout << a << endl;

    ++a;
    cout << a << endl;

    cout << "a++ con a che vale " << a << endl;
    cout << a++ << endl;

    cout << "++a con a che vale " << a << endl;
    cout << ++a << endl;

    cout << ++a << "==" << a++ << " -> " << a << endl;

    int b = ++a;
    int c = a++;
    cout << (++a == a++) << (b==c) << endl;
    if (++a == a++)
    {
        cout << "++a == a++ esito positivo " << endl;
    }
    else
    {
        cout << "++a == a++ esito negativo " << a << endl;
    }

    // if (a++ == ++a)
    // {
    //     cout << "a++ == ++a esito positivo " << a << endl;
    // }
    // else
    // {
    //     cout << "a++ == ++a esito negativo " << a << endl;
    // }

    return 0;
}