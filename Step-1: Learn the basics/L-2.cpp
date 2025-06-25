#include <iostream>
using namespace std;

void pattern1(int x, int y)
{
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int x)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int x)
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int x)
{
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int x)
{
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int i = x; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int x)
{
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (int i = x; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int x)
{
    // - - - - * - - - -
    // - - - * * * - - -
    // - - * * * * * - -
    // - * * * * * * * -
    // * * * * * * * * *
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << "- ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}

void pattern8(int x)
{
    // * * * * * * * * *
    // - * * * * * * * -
    // - - * * * * * - -
    // - - - * * * - - -
    // - - - - * - - - -
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "- ";
        }
        for (int j = 0; j < 2 * x - (2 * i + 1); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "- ";
        }

        cout << endl;
    }
}

void pattern9(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= x - i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * x - (2 * i + 1); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern10(int x)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // type - 1
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = x - 1; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // type-2
    for (int i = 1; i <= 2 * x - 1; i++)
    {
        int stars = i;
        if (i > x)
            stars = 2 * x - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

void pattern12(int x)
{
    // 1                 1
    // 1 2             2 1
    // 1 2 3         3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (x - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(int x)
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int count = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int x)
{
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    for (int i = 0; i < x; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern15(int x)
{
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A
    for (int i = x; i > 0; i--)
    {
        for (char j = 'A'; j < ('A' + i); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern16(int x)
{
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char x = 'A' + i;
            cout << x << " ";
        }
        cout << endl;
    }
}

void pattern17(int x)
{
    // - - - - A - - - -
    // - - - A B A - - -
    // - - A B C B A - -
    // - A B C D C B A -
    // A B C D E D C B A
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << "- ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}

void pattern18(int x)
{
    // E
    // D E
    // C D E
    // B C D E
    // A B C D E
    for (int i = 0; i < x; i++)
    {
        for (char ch = ('A' + x - 1) - i; ch <= ('A' + x - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int x)
{
    // * * * * * * * * * *
    // * * * * - - * * * *
    // * * * - - - - * * *
    // * * - - - - - - * *
    // * - - - - - - - - *
    // * - - - - - - - - *
    // * * - - - - - - * *
    // * * * - - - - * * *
    // * * * * - - * * * *
    // * * * * * * * * * *
    int sp = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < sp; j++)
        {
            cout << "- ";
        }
        for (int j = 0; j < x - i; j++)
        {
            cout << "* ";
        }
        sp += 2;
        cout << endl;
    }
    sp = 2 * x - 2;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < sp; j++)
        {
            cout << "- ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        sp -= 2;
        cout << endl;
    }
}

void pattern20(int x)
{
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    int sp = 2 * x - 2;
    for (int i = 1; i <= 2 * x - 1; i++)
    {
        int star = i;
        if (i > x)
            star = 2 * x - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= sp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < x)
            sp -= 2;
        else
            sp += 2;
    }
}

void pattern21(int x)
{
    // * * * * *
    // *       *
    // *       *
    // *       *
    // * * * * *
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == 0 || j == 0 || i == x - 1 || j == x - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void pattern22(int x)
{
    // 5 5 5 5 5 5 5 5 5
    // 5 4 4 4 4 4 4 4 5
    // 5 4 3 3 3 3 3 4 5
    // 5 4 3 2 2 2 3 4 5
    // 5 4 3 2 1 2 3 4 5
    // 5 4 3 2 2 2 3 4 5
    // 5 4 3 3 3 3 3 4 5
    // 5 4 4 4 4 4 4 4 5
    // 5 5 5 5 5 5 5 5 5
    for (int i = 0; i < 2 * x - 1; i++)
    {
        for (int j = 0; j < 2 * x - 1; j++)
        {
            int top = i;
            int bottom = j;
            int right = (2 * x - 2) - j;
            int left = (2 * x - 2) - i;
            cout << (x - min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int x = 5, y = 5;
    // pattern1(x, y);
    // pattern2(x);
    // pattern3(x);
    // pattern4(x);
    // pattern5(x);
    // pattern6(x);
    // pattern7(x);
    // pattern8(x);
    // pattern9(x);
    // pattern10(x);
    // pattern11(x);
    // pattern12(x);
    // pattern13(x);
    // pattern14(x);
    // pattern15(x);
    // pattern16(x);
    // pattern17(x);
    // pattern18(x);
    // pattern19(x);
    // pattern20(x);
    // pattern21(x);
    // pattern22(x);
    cout << "Hello World!";
    return 0;
}
