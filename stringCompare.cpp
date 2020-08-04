#include <iostream>
using namespace std;

bool string_comparison(string a, string b)
{
    if(a.size() != b.size()) return false;
    a += a;
    size_t index = a.find(b);
    if(index != string::npos) return true;
    return false;
}


int main(){

    string a, b;
    bool answer;

    cout << "Enter two strings: \n";

    cin >> a;
    cin >> b;

    answer = string_comparison(a, b);

    if(answer == true)
    {
        cout << "strings are the same\n";
    } else {
        cout << "strings are not the same\n";
    }
    
    return 0;
}   
