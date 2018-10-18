#include <iostream>
using namespace std;

int main()
{
    float f,fsum=0.0f;
    for (int i=0;i<12;i++)
    {
        cin>>f;
        fsum += f;
    }
    printf("$%.02f\n",fsum/12);

    return 0;
}