#include <iostream>
using namespace std;

int main()
{

    int marks;
    cin >> marks;

    // nested if-else
    // if (marks >= 90)
    // {
    //     cout << "A grade";
    // }
    // else if (marks >= 80)
    // {
    //     cout << "B Grade";
    // }
    // else if (marks >= 60)
    // {
    //     cout << "C Grade";
    // }
    // else if (marks >= 40)
    // {
    //     cout << "D grade";
    // }
    // else
    // {
    //     cout << "F Grade";
    // }

    // if-elseif-else

    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks >= 80)
    {
        cout << "B";
    }
    else if (marks >= 60)
    {
        cout << "C";
    }
    else if (marks >= 40)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}
