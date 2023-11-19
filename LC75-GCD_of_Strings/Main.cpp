#include <iostream>
#include <string>
#include <numeric>

using namespace std;
//LC75 practice
//Fabian Echevarria
class Solution {
public:
    string gcdOfStrings(string str1, string str2)
    {
        int n1 = str1.length();
        int n2 = str2.length();
        if (str1 + str2 != str2 + str1)
            return "";
        else
            return str2.substr(0,gcd(n1, n2));
    }
};

int main()
{
    Solution sol;
    
    string str1 = "ABABAB", str2 = "ABAB";
    string s = sol.gcdOfStrings(str1, str2);

    cout << s;
    return 0;
}