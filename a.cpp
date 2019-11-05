#include <iostream>

using namespace std;

int n,m,k;

	//starts from 1
int wall[101][101]={{0, 0, 0, 0, 0, 0},
					{0,	3, 5, 4, 5, 1}, 
					{0, 2, 1, 1, 5, 3}, 
					{0, 1, 1, 5, 5, 1}, 
					{0, 5, 5, 1, 4, 3}};		//FOR TESTS-DEFAULT		
//starts from 1
int weapon_pos,weapon[101]={0,1,5,1};		//FOR TESTS-DEFAULT		

void show_arr();				//used for debugging-shows the content of 'wall' aray
void Attack_Wall(int weapon);	//simulates the attack of the weapon-destroys bricks(marking them with 0)
void Simulate_Gravity();		//simulates gravity(bricks falling on the 'ground')

int main(){

	cin>>n>>m>>k;
	n=4;m=5;k=3; //FOR TESTS-DEFAULT
	show_arr();

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			//cin>>wall[i][j];  //COMMENTED FOR TESTS-DEFAULT (decomment this afterwards)

		}

    for(int i=1;i<=k;i++){
		Attack_Wall(weapon[i]);
	}

	show_arr();
	system("pause");
	return 0;
}

void Attack_Wall(int weapon){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(wall[i][j]==weapon) wall[i][j]=0;
		}
	}
	Simulate_Gravity();
}

void Simulate_Gravity(){
	for(int i=n-1;i>0;i--){		//from DOWN to UP
		for(int j=1;j<=m;j++){
			if(wall[i+1][j]==0) {		//i+1 e randul de dedesubt..si daca e gol(adica 0)
				wall[i+1][j]=wall[i][j];//aici ma mut cu caramida
				wall[i][j]=0;			//apoi fa-l pe acesta 0
			}
		}
	}

		//EX.:
		//  BBBBBB					n=0    <-----
		//	BBBBBB								|
		//	B0BBB0								|
		//	BBBBBB  <--i=n-1 start from here to /  (vor 'cadea' in groapile notate cu 0)
		//	B0B0BB  <--n
		//     |
		//	   |
		//	   V
		//	BBBBBB
		//	BBBBBB
		//	B0BBB0
		//	B0B0BB
		//	BBBBBB...si continua
}


void show_arr(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<wall[i][j]<<" ";

		}
		cout<<endl;
	}

}
