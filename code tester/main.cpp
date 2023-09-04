#include <iostream>

using namespace std;

int main()
{
    int x, y,i;
    cin >> x >> y;

    if(x<y){
       for (i=x; i <=y; i++) {
        cout << i << endl;
        }
    }
    else if(x>y){
        cout << "Please give first number small and secend number larger" << endl;

    }
    else{
        cout << "Try again";
    }
    return 0;
}
