#include <iostream>
#include "Marine.h"
#include "PhotonCannon.h"

int main()
{
	/*Marine marine1(2, 3);
	Marine marine2(3, 5);

	marine1.showStatus();
	marine2.showStatus();

	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
	marine2.beAttacked(marine1.attack());

	marine1.showStatus();
	marine2.showStatus();*/

	//-------------------------------------------------------------------

	/*Marine* marines[100];

	marines[0] = new Marine(2, 3, "Marine 1");
	marines[1] = new Marine(3, 5, "Marine 2");

	marines[0]->showStatus();
	marines[1]->showStatus();

	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;

	marines[1]->beAttacked(marines[0]->attack());

	marines[0]->showStatus();
	marines[1]->showStatus();

	delete marines[0];
	delete marines[1];

	marines[0] = nullptr;
	marines[1] = nullptr;*/

	//-------------------------------------------------------------------
	char c[70] =  "Cannon";
	PhotonCannon pc1(3, 3,c);
	PhotonCannon pc2(pc1);
	PhotonCannon pc3 = pc2;
	PhotonCannon pc4(3, 3, "Cannon");

	pc1.showStatus();
	pc2.showStatus();

	return 0;
}