#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>


using namespace std;

class Minesweeper {
private:
    int gridSize;
    int numMines;
    vector<vector<char>> field;
    vector<vector<bool>> mines;
    int flagsRemaining;

public:
    Minesweeper(int size, int minesCount);
    void displayField();
    void placeMines();
    void revealLocation(int row, int col);
    void placeFlag(int row, int col);
    bool checkWin();
    void playGame();
    int countAdjacentMines(int row, int col);
};

Minesweeper::Minesweeper(int size, int minesCount)
    : gridSize(size), numMines(minesCount), flagsRemaining(minesCount) {
    field.resize(gridSize, vector<char>(gridSize, 'c'));
    mines.resize(gridSize, vector<bool>(gridSize, false));
    // Initialize the random seed
    srand(static_cast<unsigned>(time(0)));
}



int main() {
	system("color 0B");
     int a;
	do{
	cout<<"\t\t\tWELCOME TO MINESWEEPER"<<endl;

	cout<<"Select The Field Option:\n1. 10-by-10 (12 Mines)\n2. 15-by-15 (18 Mines)\n3. 20-by-20 (24 Mines)\n4. Exit"<<endl;
    cin>>a;
		switch(a)
    {
    	case 1:
    		{
    			Minesweeper game(10, 12); 
    			game.playGame();
				break;	
			}
			
		case 2:
    		{
    			Minesweeper game(15, 18); 
    			game.playGame();	
    			break;
			}
			
		case 3:
    		{
    			Minesweeper game(20, 24); 
    			game.playGame();
				break;	
			}
			
		  default:
    		{
    			cout<<"Invalid Mode\n"<<endl;
				
			}
			
	}
	}while(a!=4);
	
	
    return 0;
}
