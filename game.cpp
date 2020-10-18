#include <iostream.h> 
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
      {
      int number,guess,attempt=0;
      srand(time(0));
            number=rand()%100 + 1;
            do
            {
                cout<<"\t\t\tGuess the number between 1 and 100\n";
                cin>>guess;
                if (guess<number)                               //started the loop
                {
                  cout<<"\t\t\tGuess a little higher\n";
                  attempt++;                                    //increamenting attempts
                }
                else if (guess>number)                          //checking the second condition
                {
                  cout<<"\t\t\tGuess a bit lower\n"; 
                   attempt++;               }                   //increamenting attempts
                else
                {          
                     cout<<"\t\t\tYou have guessed the number right shabassh you are still my kaddu\nYou scored  "<<attempt<<" points"<<endl;
                    }
                  
            } while (number!=guess);
            
        return 0;
  }



