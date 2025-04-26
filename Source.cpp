#include <iostream>
#include <cmath>
using namespace std;

struct Coordinate
{
    int x;
    int y;

    Coordinate(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int **getArray(Coordinate pos, int **numArr)
{
    int **newArr = new int *[4];
    pos.x = abs(pos.x);
    pos.y = abs(pos.y);

    int x = 10 - pos.x;
    int y = 10 - pos.y;

    *(newArr + 0) = new int[(pos.x * pos.y) + 1];
    *(newArr + 1) = new int[(x * pos.y) + 1];
    *(newArr + 2) = new int[(pos.x * y) + 1];
    *(newArr + 3) = new int[(x * y) + 1];
    int k = 0;

    for (int i = 0; i < pos.y; i++)
    {
        for (int j = 0; j < pos.x; j++)
        {
            *(*(newArr + 0) + k++) = *(*(numArr + i) + j);
        }
    }
    *(*(newArr + 0) + k++) = -1;

    for (int i = 0; i < k; i++)
    {
        cout << *(*(newArr + 0) + i) << " ";
    }
    cout << endl;
    k = 0;

    for (int i = 0; i < pos.y; i++)
    {
        for (int j = pos.x; j < pos.x + x; j++)
        {
            *(*(newArr + 1) + k++) = *(*(numArr + i) + j);
        }
    }
    *(*(newArr + 1) + k++) = -1;

    for (int i = 0; i < k; i++)
    {
        cout << *(*(newArr + 1) + i) << " ";
    }
    cout << endl;
    k = 0;

    for (int i = pos.y; i < pos.y + y; i++)
    {
        for (int j = 0; j < pos.x; j++)
        {
            *(*(newArr + 2) + k++) = *(*(numArr + i) + j);
        }
    }
    *(*(newArr + 2) + k++) = -1;
    for (int i = 0; i < k; i++)
    {
        cout << *(*(newArr + 2) + i) << " ";
    }
    cout << endl;
    k = 0;

    for (int i = pos.y; i < pos.y + y; i++)
    {
        for (int j = pos.x; j < pos.x + x; j++)
        {
            *(*(newArr + 3) + k++) = *(*(numArr + i) + j);
        }
    }
    *(*(newArr + 3) + k++) = -1;
    for (int i = 0; i < k; i++)
    {
        cout << *(*(newArr + 3) + i) << " ";
    }
    cout << endl;

    return newArr;
}

int main()
{

    int **numArr = new int *[10];
    for (int i = 0; i < 10; i++)
    {
        *(numArr + i) = new int[10];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            *(*(numArr + i) + j) = i * j + j;
        }
    }

    Coordinate position(-4, 2);
    int **newArr = getArray(position, numArr);
}