#include <iostream>
using namespace std;

void convertTime(int totalSeconds, int &hours, int &minutes, int &seconds)
{
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
}

int main()
{
    int totalSeconds = 4000;
    int h, m, s;

    convertTime(totalSeconds, h, m, s);

    cout << h << " hours, "
         << m << " minutes, "
         << s << " seconds";

    return 0;
}
