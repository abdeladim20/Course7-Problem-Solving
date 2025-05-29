#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
            // cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

bool IsMatrixIdentity(int Matrix1[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix1[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    int Matrix1[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsMatrixIdentity(Matrix1, 3, 3))
        cout << "\nYES: martix is identity.\n";
    else
        cout << "\nNo: martix is NOT identity.\n";

    // system("pause>0");
    return 0;
}