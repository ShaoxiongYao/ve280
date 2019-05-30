#include <iostream>
#include <cassert>

using namespace std;

bool IsPrime(int num)
{
    int i = 2;
    while(i*i <= num)
    {
        if (num % i == 0) return false;
        ++i;
    }
    return true;
} 

bool is_magnanimous(int num) {
    // TODO: Your implementation here
    int i = 1;
    int num1,num2 = 0;
    while (num / i >= 1)
    {
        num1 = num/10;
        num2 += (num%10)*i;
        if (!(IsPrime(num1+num2)))
        {
            return false;
        }
        num /= 10;
        i *= 10;
    }
    return true;
}

void test_magnanimous() {
    assert(!is_magnanimous(15));  // 15 is not a magnanimous number
    assert(is_magnanimous(1316));
    // TODO: Add more test cases
    cout << "Magnanimous number tests passed!" << endl;
}
