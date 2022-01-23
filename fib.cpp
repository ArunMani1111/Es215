#include <iostream>
using namespace std;

int main() 
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout<<"0 "<<"1 ";
	for (int i = 1; i <= 98; i++) 
	{
	    nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}
