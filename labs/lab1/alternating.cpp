#include <iostream>
#include <cassert>

using namespace std;

bool is_alternating(int num, int base) {
    bool cu_odd = (num%base)%2;
    num /= base;
    while(num > 0)
    {
        if (!(cu_odd ^ (num%base)%2)) return false;
        cu_odd = (num%base)%2;
        num /= base;
    }
    return true;
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    assert(is_alternating(5, 2));  // 24 is not an alternating number in base 10
    cout << "Alternating number tests passed!" << endl;
}
