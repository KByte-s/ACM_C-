#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int count;
    string str1,str2,str3,str4,b;
    while (1) {
        cin >> count;
        if(count == 0)break;
        string num[count];
        for (int i = 0; i < count; ++i) {
            cin >> num[i];
        }
        for (int x = 0; x < count; x++) {
            for (int y = 0; y < count - 1 - x; y++) {
                if (num[y]+num[y+1] < num[y+1]+num[y]) {
                    b = num[y];
                    num[y] = num[y + 1];
                    num[y + 1] = b;
                }
            }
        }
        for (int i = 0; i < count; i++) cout << num[i];
        cout << endl;
    }
    return 0;
}