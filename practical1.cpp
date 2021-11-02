#include <iostream>
#include <cstring>

using namespace std;

int main() {

  char phrase[80];
  char temp;
  //char swap1[80];
  //char swap2[80];
  int a;

  //read in phrase
  cin.get(phrase, 80);
  cin.get();
  //cout << strlen(phrase) << endl;

  //if the first two characters are not spaces, then swap
  if (phrase[0] != ' ' && phrase[1] != ' ')
    {
      temp = phrase[0];
      phrase[0] = phrase[1];
      phrase[1] = temp;
      /*
      swap1[a] = phrase[0];
      swap2[a] = phrase[1];
      phrase[0] = swap2[a];
      phrase[1] = swap1[a];
      */
    }
  // swap the first two characters after a space
  //(first two letters of each word)
  for (int a = 0; a < strlen(phrase); a++)
    {
       if (phrase[a] == ' ')
	{
	  temp = phrase[a+1];
	  phrase[a+1] = phrase[a+2];
	  phrase[a+2] = temp;

	  /*  
	  swap1[a] = phrase[a+1];
	  swap2[a] = phrase[a+2];
	  phrase[a+1] = swap2[a];
	  phrase[a+2] = swap1[a];
	  */
	}
      
    }

  //print out new phrase
  cout << phrase << endl;

  
}
