#include <string>
#include <iostream>
using namespace std;
int strreplase(string &s1, const string &s2, const string &s3){
    string::size_type pos = 0;
    string::size_type a = s2.size();
    string::size_type b = s3.size();
    while ((pos = s1.find(s2,pos)) != string::npos){
        s1.replace(pos, a, s3);
        pos += b;
    }
    return 0;
}

int main()
{
    string str1, str2;
    while(true){
        getline(cin, str1);
        getline(cin, str2);
        strreplase(str1, str2, "");
        cout << str1 << endl;
    }
    return 0;
}
