#include <iostream>
#include <string.h>
using namespace std;
int main(){
   bool exit = 0;
   int wordval;
   while (!exit){
   wordval = 0;
   char msg[] ="";
   cin>>msg;
   string word = string(msg);
   if (word == "hello") {
      wordval = 1;
   }
   if (word == "wallace") {
      wordval = 2;
   }
   if (word == "luke") {
      wordval = 3;
   }
   if (word == "exit") {
      wordval = -1;
   }
   
   switch (wordval){
      case 0:
         cout << "that's not interesting" << endl;
         break;
      case 1:
         cout << "hello, how are you?" << endl;
         break;
      case 2:
         cout << "wallace is the 2nd best" << endl;
         break;
      case 3:
         cout << "luke is the best" << endl;
         break;
      case -1:
         cout << "see ya" << endl;
         exit = 1;
         break;
      default:
         break;
      }
   }
   return 0; 

}
