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

    cout << a++ << endl;

    cout << ++a << endl;

    if (++a == a++)
    {
        cout << "++a == a++ esito positivo " << a << endl;
    }
    else
    {
        cout << "++a == a++ esito megativo " << a << endl;
    }

    if (a++ == ++a)
    {
        cout << "a++ == ++a esito positivo " << a << endl;
    }
    else
    {
        cout << "a++ == ++a esito negativo " << a << endl;
    }

    return 0;
}