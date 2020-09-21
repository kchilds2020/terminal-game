#include<iostream>
using namespace std;
//top class
class enemy{
//encapsulation
	protected:
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

//inheritance
class goblin: public enemy{
	public:
		int doubleHealth(){
			return health * 2;
		}

};
int main(){
	goblin gob;
	cout << gob.damageTaken(30) << " " << gob.doubleHealth() << endl;
	return 0;
}
