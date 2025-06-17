#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // printf(" %0*d ", 2, arr[i][j]);
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

short GetMinNumber(int arr[3][3], int Rows, int Cols)
{
    short Min = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Min > arr[i][j])
            {
                Min = arr[i][j];
            }
        }
    }   
    return Min;
}

short GetMaxNumber(int arr[3][3], int Rows, int Cols)
{
    short Max = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Max < arr[i][j])
            {
                Max = arr[i][j];
            }
        }
    }  
    return Max;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int Matrix1[3][3];
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMinimum Number is: " << GetMinNumber(Matrix1, 3, 3) << endl;
    cout << "\nMaximum Number is: " << GetMaxNumber(Matrix1, 3, 3) << endl;
    // system("pause>0");
    return 0;
}