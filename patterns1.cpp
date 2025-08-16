#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cout << "enter the number of rows";
    // cin >> n;
    // // Solid square
    // // outer looop
    // // row += 1 is same as row = row + 1
    // for (int row = 0; row < n; row += 1)
    // {
    //     /// inner
    //     // col += 1 is same as col = col + 1
    //     for (int col = 0; col < n; col += 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    int rowCount, colCount;
    cout << "enter the no. of rows and cols";
    cin >> rowCount;
    cin >> colCount;

    // Hollow Rectangle
    for (int row = 0; row < rowCount; row = row + 1)
    {
        // first row or last row -> print 5 *
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            // remainging middle rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < colCount - 2; i = i + 1)
            {
                cout << "  ";
            }
            // last star
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
