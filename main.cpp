#include <iostream>
using namespace std;
int main()
{
    /* for loop syntax
    for (initialization; condition; increment/decrement) {
    // Code to be executed in each iteration
}

    for (int i ; i < 10; i++)
    {
        cout << i << endl;

    }*/
    // while loop syntax
    /*while(condition)
     */
 /*   int a = 0;
    while (a < 25)
    {
        cout << a << endl;
        a++;

    }*/
   /* do
    {

    }while (condiation);*/

   /* int s = 0;
   do
   {
       cout << s << endl;
       s++;

   }while (s <12);*/
   int n , faktoriel = 1; // faktoriyel alma programı
   cin >> n;
   while (n > 0)
   {
       faktoriel *= n ;
       n --;

   }
   cout << faktoriel << endl;
   return 0;
    // if controls
    int no ;
    if (no > 0)
    {
        cout << "sayınız sıfırdan büyük";

    }else if (no > 100)
    {
        cout << " sayı yüzden büyük";
    }else
    {

        cout << "sayı negatiffff";
    }
 // nested if blocks
     int num , num2;
    if (num > num2 )
    {
        if (num > 12)
        {
            cout << "sayı büüyk";
        }else
        {
            cout << "sayı küçük";
        }
    }else
    {
        cout << "sayı negatif";
    }


}

