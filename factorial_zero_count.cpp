/* combinatorics - counting zeros in factorial
   100! = 24 zeros

   amra jodi n! er vitore kono ekta prime number p koto gula ase seta ber korte chai tahole amader formula hobe ->
   floor(n/p) + floor(n/p*p) + floor(n/p*p*p) + ... jotokhon na zero hoy
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=100, cnt=0;

    for(int i=1; ; i++)
    {
        if((pow(5, i)) > n)
            break;

        cnt = cnt + floor(n/pow(5, i));
    }

    cout << "Total zeros in " << n << "! = " << cnt << endl;
    return 0;
}
