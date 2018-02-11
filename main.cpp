#include <iostream>
using namespace std;

int setbits(int n)
{

    int i = 0,cnt=0;
    while (n > 0) {
       if(( n % 2)==1)
        cnt++;
        n = n / 2;

    }
   return cnt;
}

int setprime(int n)
{
    int a=setbits(n);

  int prime=1;
  if(a<2)
  {
      prime=0;
  }
for(int i=2; i<=a/2; ++i)

    {
        if(a%i==0)
        {
            prime=0;
            break;
        }
    }
return prime;

}
int main() {
    int n;
    long int L,M,c=0,i;
cin>>n;
while(n--)
{
    cin>>L>>M;
    for(i=L;i<=M;i++)
    {
       c=c+setprime(i);
    }
    cout<<c<<endl;
 }}


