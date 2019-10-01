#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>


using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0)));  // Create the Random Number 

	int enemyLocation = rand() % 64 + 1; // Number between 1 and 64.
	int boxMax = 64;
	int boxMin = 1;
	int AIpredictions = 0;
	int ranPredictions = 0;
	int linearPredictions = 0;
	int humanPredictions = 0;
	int AIguessLocation = rand() % 64 + 1; // Number between 1 and 64.
	int ranguessLocation = rand() % 64 + 1;
	int linearguessLocation = 0;
	int humanguessLocation;
	int Y;
	int N;

	bool enemyFound = false;
	cout << "\n\t\t\t\t\t Welcome to Skynet, Soldier.\n\n";
	cout << "Today, I will be unveiling some new A.I, called UAV. The 'HK-Aerial'.\n\n";
	cout << "HK-Aerial Software Initalizing...\n\n";
	cout << "Soldier, our Intelligence software stragetically places an enemy randomly within an 8x8 Grid.\nAllowing 1 of 64 random locations to be selected within the grid\n";
	cout << "HK-Aerial, hunts down and tracks the enemy in the correct grid sector within a matter of moments.\n\n";


	//Create the search loop (do) function.
	do
	{
		cout << "'HK-Aerial-AI' Sending out Ping # " << AIpredictions << "\n";


		if (AIguessLocation > enemyLocation)
		{
			cout << "\nThe enemy location is not in box # " << AIguessLocation << " number too high.\n";
			boxMax = AIguessLocation;
			AIguessLocation = ((boxMax - boxMin) / 2) + boxMin;
			AIpredictions++;
		}
		else if (AIguessLocation < enemyLocation)
		{
			cout << "\nThe enemy location is not in box # " << AIguessLocation << " number too low.\n";
			boxMin = AIguessLocation;
			AIguessLocation = ((boxMax - boxMin) / 2) + boxMin;
			AIpredictions++;
		}
		if (AIguessLocation == enemyLocation)
		{
			cout << "\nThe enemy was located in box # " << enemyLocation << "\n";
			cout << "\nEnemy Location Spotted. Only took 'HK-Aerial-AI " << AIpredictions << " search attempts.\n";
			enemyFound = true;
		}

	} while (enemyLocation != AIguessLocation);

	do 
	{
		cout << "'HK-Aerial-ran' Sending out Ping # " << ranPredictions << "\n";
		if (ranguessLocation > enemyLocation) 
		{
			cout << "\nThe enemy location is not in box # " << ranguessLocation << " number too high.\n";
			ranguessLocation = rand() % 64 + 1;
			ranPredictions++;

		}
		else if (ranguessLocation < enemyLocation)
		{
			cout << "\nThe enemy location is not in box # " << ranguessLocation << " number too low.\n";
			ranguessLocation = rand() % 64 + 1;
			ranPredictions++;
		}
		if (ranguessLocation == enemyLocation)
		{
			cout << "\nThe enemy was located in box # " << enemyLocation << "\n";
			cout << "\nEnemy Location Spotted. Only took 'HK-Aerial-ran " << ranPredictions << " search attempts.\n";
			enemyFound = true;
		}

	} while (enemyLocation != ranguessLocation);

	do
	{
		cout << "'HK-Aerial-linear' Sending out Ping # " << linearPredictions << "\n";
		if (linearguessLocation < enemyLocation)
		{
			cout << "\nThe enemy location is not in box # " << linearguessLocation << " number too low.\n";
			linearguessLocation++;
			linearPredictions++;

		}

		else if (linearguessLocation == enemyLocation);
		{
			cout << "\nThe enemy was located in box # " << enemyLocation << "\n";
			cout << "\nEnemy Location Spotted. Only took 'HK-Aerial-linear " << linearPredictions << " search attempts.\n";
			enemyFound = true;
		}

	} while (enemyLocation != linearguessLocation);

	do 
	{
		cout << "Human, sending out ping # " << humanPredictions << "\n";
		cout << "\nPlease input guess...\n";
		cin >> humanguessLocation;
		if (humanguessLocation < enemyLocation)
		{
			cout << "\nThe enemy location is not in box # " << humanguessLocation << " number too low.\n";
			cout << "\nPlease guess higher...\n";
			cin >> humanguessLocation;
			humanPredictions++;

		}
		else if (humanguessLocation > enemyLocation);
		{
			cout << "\nThe enemy location is not in box # " << humanguessLocation << " number too high.\n";
			cout << "\nPlease guess lower...\n";
			cin >> humanguessLocation;
			humanPredictions++;


		}
		if (humanguessLocation == enemyLocation);
		{
			cout << "\nThe enemy was located in box # " << enemyLocation << "\n";
			cout << "\nEnemy Location Spotted. Only took you " << humanPredictions << " search attempts.\n";
			enemyFound = true;

			
		}


	} while (enemyLocation != humanguessLocation);





	system("pause");
	return(0);
}




/*Create a new solution and project and GitHub for this assignment.
Hint: Open two separate visual studios to do this. One for the old solution project, and one for the new solution project. Now copy all the code from the original Skynet HK-Aerial into this new project to save you from having to recode everything from scratch. Test this before you move on to make sure the code works in your new project like it did in your old project. Now close your old project and that instance of visual studio.
Modify your new C++ program for the Skynet HK-Aerial.
Add another AI player using the less efficient Linear search pattern.
Add another AI player using a random number guess between grid locations 1 and 64.
Add a human player, letting the human input grid numbers from the console.
The easiest way to code this would be for this program’s user interface to start with the human player and use a while loop until the human guesses the location the enemy while keeping track of the number of guesses the human uses. Then the random guess AI player should guess using their own while loop until they find the enemy location and keep track of how many guesses it took them. Then the linear Search AI player should guess using their own while loop until they find the enemy location, and then finally the Binary search AI should run it’s while loop and keep track of the number of guesses it takes to find the enemy location. Once all players AI and Human have found the enemy location, then this game is over. Display the stats of each player's number of guesses it took. You don't have to physically sort them, just display the number of guesses each drone pilot took to find the enemy.
Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
The Grid does not need to be displayed, remember the grid is abstract. Think of this as more of a guess the number game like at the end of chapter two.
When all the players have found the enemies, the game is over, the console should ask the human player if they would like to play again. If the human player say's yes, then the game should reset all scores and play again.
Put this new project into a new GitHub repostiory and take a screenshot of it.
Your code should be well formatted and with lots of comments explaining your code. 


*/