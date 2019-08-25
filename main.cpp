#include <string>
#include <iostream>
using namespace std;

string countSheep(int number) {
  string message="";              //We created our string, where a message would be stored. 
  for(int n=1;n<=number; n++){    //Next, I created the function "for" to count sheep.
    if(n<10){                     //We should test if our number is more significant than ten or not because if it`s, we should divide the amount into two parts: tens and ones.
      char z = 48 + n;            //To create string number, we should transfer integer into char.
       message = message + z +" sheep...";    //We count sheep and add our message to our storage.
    } else {                                  //This part is more complicated because we divide the number into two sections.
        char ones = 48 + n % 10;              //Count for ones 
        char decimal=48+(-n%10+n)/10;         //Count for decimals
        message = message + decimal + ones +" sheep..."; //Add text to our storage.
      }
    }
  return message; //Return our work! =)
}

int main(){
  cout << "Enter number of sheeps: ";
  int sheeps;
  cin >> sheeps;
  cout << countSheep(sheeps);
 return 0; 
}
