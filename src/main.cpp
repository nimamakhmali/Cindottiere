#include <iostream>
#include <vector>
using namespace std;

class Cart{
	public:
	private:
		string type;
};

class Player{
	public:
		setPlayer(){
			
		}
	    getPlayer(){
	    	
		}
	private:
		
};

int main(){
	int players;	
	bool flag = true;
	while(flag == true){
		cin >> players;
		if(players >= 3 && players <= 6){
		  flag = false ;

		  vector<Player> player(players);
		  for(int i=0 ; i<players ; i++){
		    	player[i].setPlayer();
		  }
	    }
	    else{
	    	flag = true;
		}
   }
	return 0;
}