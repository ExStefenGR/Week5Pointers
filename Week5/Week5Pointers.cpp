#include <iostream>


struct Player
{
	int HP;
	int AT;
	int DF;
	int LV;
};

Player player1;

//void DisplayAdded(float* weight)
//{
//	*weight += 5.987234798042;
//	std::cout << std::endl << "Added weight is: " << *weight;
//}
//==========================================================================

void LevelUP(Player* player1)
{
	player1->HP += 5;
	player1->AT += 1;
	player1->DF += 4;
	player1->LV += 1;

	std::cout << std::endl << "Level UP!" <<
	std::endl << "HP IS: " << player1->HP <<
	std::endl << "ATTACK IS: " << player1->AT <<
	std::endl << "DEFENCE IS: " << player1->DF <<
	std::endl << "LEVEL IS: " << player1->LV << std::endl;

}

int main()
{

	//float weight = 50;

	//std::cout << std::endl << "Weight before: " << weight;
	//DisplayAdded(&weight);
	//system("pause");
	//system("clear");

	//------------------------------------------------------

	player1.HP = 100;
	player1.AT = 10;	
	player1.DF = 5;
	player1.LV = 32;

	std::cout << std::endl << "HP IS: " << player1.HP <<
		std::endl << "ATTACK IS: " << player1.AT <<
		std::endl << "DEFENCE IS: " << player1.DF <<
		std::endl << "LEVEL IS: " << player1.LV << std::endl;
	LevelUP(&player1);

	system("pause");
	return 0;
}