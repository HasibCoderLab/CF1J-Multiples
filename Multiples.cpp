// ================================================
//                Platform : Codeforces
//                Contest  : CF1J
//                Problem  : Multiples
//                Language : C++
//                Topic    : [Multiples]
//                File     :Multiples.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    long long A, B;
    cin >> A >> B;
    string result = B / A ? "Multiples " : "No Multiples";
       cout<< result;
    return 0;
}