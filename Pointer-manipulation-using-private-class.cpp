/* Vimlesh Kumar Kanaujiya */
#include <bits/stdc++.h>
using namespace std;
 
class X {
private:
    int x;
    int y;
    int z;
};
 
int main()
{
    X x;
    int* p = (int*)&x;
    *p = 3;
    p++;
    *p = 2;
    p++;
    *p = 1;
    
    cout << endl << "x = " << *p+2;
    cout << endl << "y = " << *p+1;
    cout << endl << "z = " << *p+0;
    
    return 0;
}
