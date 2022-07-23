#include "Tick.h"

void Tick(Storage& s1, Storage& s2)
{
	int targetStorage = 0;
	int order = 0;

	while (true)
	{
		cout << "1) s1 창고 / 2) s2 창고  " << endl;
		cin >> targetStorage;

		switch (targetStorage)
		{
		case 1:
			cout << "\n- s1 창고 입니다. - \n" << endl;
			cout << "0) 창고 선택으로 돌아갑니다. / 1) 창고에 채소를 넣습니다. / 2) 창고에서 채소를 꺼냅니다. / 3) 창고에 있는 채소를 확인합니다.  " << endl;
			cin >> order;

			switch (order)
			{
			case 0:
				break;
			case 1:
				s1.AddMode();
				break;
			case 2:
				s1.MinusMode();
				break;
			case 3:
				s1.showStorage();
				break;
			default:
				break;
			}

			break;
		case 2:
			cout << "\n- s2 창고 입니다. -\n" << endl;
			cout << "0) 창고 선택으로 돌아갑니다. / 1) 창고에 채소를 넣습니다. / 2) 창고에서 채소를 꺼냅니다. / 3) 창고에 있는 채소를 확인합니다.  " << endl;
			cin >> order;

			switch (order)
			{
			case 0:
				break;
			case 1:
				s2.AddMode();
				break;
			case 2:
				s2.MinusMode();
				break;
			case 3:
				s2.showStorage();
				break;
			default:
				break;
			}

			break;
		default:
			break;
		}
	}
}
