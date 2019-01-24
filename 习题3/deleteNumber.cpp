#include <iostream>
#include <string>
using namespace std;
void del(string &n);
int strreplase(string &s1, const string &s2, const string &s3);
int main(){
    int group, m;
    string n;
    cin >> group;
    for (int i = 0; i < group; ++i) {
        cin >> m >> n;
        for (int j = 0; j < m; ++j) {
            del(n);
        }
        cout << n << endl;
    }
    return 0;
}
void del(string &n){
    string m = "0";
    int temp = 1;
    unsigned long long int length = n.length();
    if(n.substr(1,1) == "0"){
        strreplase(n, n.substr(0, 1), "");
        strreplase(n, "0", "");
        //删除第一个值
    }
    else {
        for (int i = 0; i < length; ++i) {
            if(n.substr(i, 1) > n.substr(i+1, 1)){
                m = n.substr(i, 1);
                break;
            }
            if((i+1 == length-1))m = n.substr(i+1, 1);
        }
        strreplase(n, m, "");
        //删除最大的值
    }
}
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