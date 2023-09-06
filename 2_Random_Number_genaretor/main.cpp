#include <iostream>
#include <cstdlib>
# include <ctime>

using namespace std;

int main()
{
    int i;
    for (i=1; i<=100; i--){
    //  long elapsedSeconds = time(0); // January 1 1970
        const short minValue = 1;
        const short maxValue = 6;
        srand(time(0));
        short frist = (rand() % (maxValue-minValue+1)) + minValue;
        short second = (rand() % (maxValue-minValue+1)) + minValue;
        cout << frist << ", " << second << endl;
    }
    return 0;
}
