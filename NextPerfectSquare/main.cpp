#include <iostream>
#include <math.h>
using namespace std;





long int findNextSquare(long int sq){

bool test=false;

    if(sqrt(sq)!=(int)sqrt(sq)){

        return -1;

    }




    sq+=1;

      while(!test){


        if(sqrt(sq)==(int)sqrt(sq))

            test=true;

        else sq++;


      }


      return sq;

    }


int main()
{

    cout<<findNextSquare(625);
    return 0;
}
