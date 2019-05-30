#include <iostream>
#include <cassert>

using namespace std;

bool is_jordan_polya(int num) {
    // TODO: Your implementation here
    if (num == 1) return true;
    int fact = 2,cu_num = 2;
    bool re_bo = false;
    while(fact <= num)
    {
        if (num%fact == 0) 
        {
            re_bo = re_bo|is_jordan_polya(num/fact);
        }
        fact *= (++cu_num);
    }
    return re_bo;
}

void test_jordan_polya() {
    assert(!is_jordan_polya(5));  // 5 is not a Jordan-Polya number
    assert(is_jordan_polya(288)); 
    cout << "Jordan-Polya number tests passed!" << endl;
}
