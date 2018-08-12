#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;


static string playPass(const string &s,int n)
{
    int i;
    string x;

     for(i=0;i<s.length();i++){
        if (s[i]>=65 && s[i]<=90)

            if(s[i]+n>90)
              x.push_back(char(65+s[i]+n-90-1));

              else

          x.push_back(char(s[i]+n));

          else

         if(s[i]>=48 && s[i]<=57)

            x.push_back(char(57-s[i]+48));



          else
                x.push_back(char(s[i]));


         if(i%2!=0 && isalpha(x[i]))
           x[i]=x[i]+32;

  }

        reverse(x.begin(),x.end());

    return x;


}


int main()
{


    cout<<playPass("MY GRANMA CAME FROM NY ON THE 23RD OF APRIL 2015", 2);


    return 0;
}
