#include <string>
#include <vector>
#include <iostream>

using namespace std;
int prime() {
   int user_var;

   int user_temp;
   vector<int> primes;


   cout << "Enter a number greater than 1: "; cout << endl;
   cin >> user_var;
   user_temp = user_var;
      if (user_var <= 1) {
         cout <<"[]";
         return 0;
      }
   else {
      for (int i = 2; i <= user_temp; i++) {
         while (user_temp % i == 0) {
            primes.push_back(i);
            user_temp/=i;
         }
      }
   cout << "[";
   for (int i = 0; i < primes.size(); i++) {
      cout << primes[i];
      if (i != primes.size() - 1) {
         cout << ", ";
      }
   }
      cout << "]";
      cout << endl;
   }
   return 0;

   }

