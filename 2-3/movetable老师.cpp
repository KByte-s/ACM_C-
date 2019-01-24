#include <iostream>
#include <cstring>
using namespace std;
class Demo {
public:
    int begin, end;
};
int main(){
    int room[201], temp, group, max = 0;
    cin >> temp;
    while(temp--){
        memset(room, 0, sizeof(room));
        cin >> group;
        Demo move[group];
        for (int i = 0; i < group; ++i) {
            cin >> move[i].begin >> move[i].end;

            if(move[i].begin % 2 == 0)
            move[i].begin = move[i].begin/2;
            else move[i].begin = (move[i].begin+1)/2;
            if(move[i].end % 2 == 0)
                move[i].end = move[i].end/2;
            else move[i].end = (move[i].end+1)/2;
            if(move[i].begin > move[i].end){
                int k = move[i].begin;
                move[i].begin = move[i].end;
                move[i].end = k;
            }
            for (int j = move[i].begin; j <= move[i].end; ++j)
                room[j] += 1;
        }

        for (int k = 1; k <= 200; k++)
            if(room[k] > max)max = room[k];
        cout << 10 * max << endl;
        max = 0;
    }
    return 0;
}
