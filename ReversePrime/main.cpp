#include <iostream>
#include <string>


using namespace std;


bool checkPrime(long long x){

int j,counter=1;

    for(j=2;j<x/2;j++){
        if(x%j==0)
           counter=0;

}

if (counter==1)

  return true;

    else

        return false;


}


bool checkReversePrime(long long x){


long long copyval=0,numero;
int j,counter=1;

numero=x;


while(numero){


  copyval=copyval*10+numero%10;
  numero=numero/10;

}


  for(j=2;j<copyval/2;j++){
        if(copyval%j==0)
           counter=0;

}

if (counter==1)

  return true;

    else

        return false;




}


int reverseNr(int x){

int copyval=0;

while(x){


  copyval=copyval*10+x%10;
  x=x/10;

}


return copyval;

}



   static void backwardsPrime(long long start, long long endr){

  long long i;
  string result;

    for(i=start;i<=endr;i++){

      if(i>=10 && reverseNr(i) != i && checkPrime(i)  && checkReversePrime(i)) {

          //  result+=to_string(i);
     // result+=" ";

   cout<<i<<" ";

}

    }



//return result;


  }


int main()
{

backwardsPrime(2,100);
cout<<endl;

cout<<reverseNr(67);

    return 0;
}
