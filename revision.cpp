#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t loop= time(nullptr);
    cout<<asctime(localtime(&loop))<<"time"<<loop;
}
