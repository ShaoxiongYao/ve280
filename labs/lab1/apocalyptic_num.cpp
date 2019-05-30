#include<iostream>
#include<cassert>
#include<string>

using namespace std;

string pow_2(int n)
{
    if(n == 1) return "2";
    string pre_num = pow_2(n-1),out_num = "";
    int i, carry = 0, cu_num;
    for (i = pre_num.size()-1;i>=0;--i)
    {
        cu_num = 2*(pre_num.at(i)-'0')+carry;
        out_num = (char)(cu_num%10+'0')+out_num;
        //cout<<out_num<<endl;
        carry = cu_num/10;
    }
    if (carry != 0) out_num = (char)(carry+'0')+out_num;
    return out_num;
}

bool is_apocalytic_num(int n)
{
    string str = pow_2(n);
    int i;
    for(i = 0;i+3<str.size();++i)
    {
        if(str.at(i) == '6' && str.at(i+1) == '6' && str.at(i) == '6'){
            return true;
        }
    }
    return false;
}

void test_apocalytic_num()
{
    assert(!is_apocalytic_num(6));  // 6 is not a Duffinian number
    assert(is_apocalytic_num(157));  // 6 is not a Duffinian number
    cout << "Apocalytic number tests passed!" << endl;
}

int main()
{
    test_apocalytic_num();
    return 0;
}