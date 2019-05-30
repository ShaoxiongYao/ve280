#include <iostream>
#include <cassert>

using namespace std;

int gcd(int num1, int num2)
{
    if (num1%num2 == 0) return num2;
    if (num2%num1 == 0) return num1;
    if (num1 > num2) return gcd(num2,num1%num2);
    else return gcd(num1,num2%num1);
}

bool is_duffinian(int num) {
    int i,sum = 0;
    for (i = 1;i <= num;++i)
    {
        if (num%i == 0) sum+=i;
    }
    if(gcd(sum,num) == 1) return true;
    else return false;
}

void test_duffinian() {
    assert(!is_duffinian(6));  // 6 is not a Duffinian number
    assert(is_duffinian(35));  // 6 is not a Duffinian number
    cout << "Duffinian number tests passed!" << endl;
}
