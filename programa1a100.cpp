#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    for (int i = 1; i <= 100; i++)
    {

        if (i % 3 == 0)
        {
            cout << i << " : Fizz" << endl;
        }

        if (i % 5 == 0)
        {

            cout << i << " : Buzz" << endl;
        }
        if(i % 3 != 0 || i % 5 != 0)
        {

            cout << i << " : FizzBuzz" << endl;
        }

        
    }


    return (0);
}