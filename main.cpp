#include<iostream>
using namespace std;

class enemy{
	private:
		string name = "Enemy";
		int health = 100;
	public:
		string getName(){
			return name;	
		}

		void setName(string n){
			name = n;
		}
		int damageTaken(int damage){
			return health -= damage;
		}
		int attack(){
			srand(time(NULL));
			return rand() % 100; 
		}
};

int main(){
	enemy e;
	cout << e.attack();
	return 0;
}
