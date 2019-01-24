#include<iostream>
 
using namespace std;
 
bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int Cut(int n) {
    int rec = 0;
    if (n != 1)
        while (n) {
            rec += n % 10;
            n /= 10;
        }
    return rec;
}
int Simth(int n) {
    int rec = 0;
    int i = 2;
    while (i * i <= n) {
        while (n % i == 0) {
            n /= i;
            rec += Cut(i);
        }
        i++;
    }
    rec += Cut(n);
    return rec;
}
int main() {
    int n;
    while (cin >> n, n) {
        while (true) {
            n++;
            if (isPrime(n))
                continue;
            int s1 = Cut(n), s2 = Simth(n);
            if (s1 == s2) {
                cout << n << endl;
                break;
            }
        }
    }
    return 0;
}

