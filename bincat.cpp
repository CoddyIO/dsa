#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
    int number;
    bitset<32> a,b;
    cout << "Enter a decimal number: ";
    cin >> number;
    string c,l;
    for (int i=0;i<number+1;i++ ){
    a= bitset<32>(i);
    c= a.to_string();
    c.erase(0, c.find_first_not_of('0'));
    cout<<c<<endl;
    l=l+c;
    }
    cout<<l;
    cout << "Enter a decimal number: ";
    cin >> number;
    string s;
    for (int i=0;i<number+1;i++ ){
    a= bitset<32>(i);
    c= a.to_string();
    c.erase(0, c.find_first_not_of('0'));
    cout<<c<<endl;
    s=s+c;
    }
    cout<<s<<endl;
    string ks=s+l;
    cout<<ks<<endl;
    int man= ks;
    
    

   
    return 0;
}