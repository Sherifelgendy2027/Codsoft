#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int lower = 0 , upper = 300 , player_number ;
	srand(time (0));
	int random = (rand() % (upper - lower + 1) + lower);
    cout << "range between 0 and 300 \n" ;
	while(1)
	{
		cout << " enter your guessing number \n ";
		cin >> player_number;
		if(player_number > random)
		{
			if( (player_number - random) > 50 )
			{
				cout << "your number is too high " << endl;
			}
			else if ((player_number - random) > 10 )
			{
				cout << "nice guess , you are in the zone\ntry lower number \n ";
			}
			else
			{
				cout << "nice guess , so close \ntry a little bit lower  \n " ;
			}
		}
		else if(random > player_number)
		{
			if( (random - player_number ) > 50 )
			{
				cout << "your number is too lower " << endl;
			}
			else if ((random - player_number) > 10)
			{
				cout << "nice guess , you are in the zone\ntry larger number\n";
			}
			else
			{
				cout << "nice guess , so close\ntry a little bit larger \n" ;
			}
		}
		else 
		{
			cout<< "congratulation you guessed the right number"<< endl;
			break;
		}		
	}
	return 0 ; 
}
 