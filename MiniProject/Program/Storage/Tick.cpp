#include "Tick.h"

void Tick(Storage& s1, Storage& s2)
{
	int targetStorage = 0;
	int order = 0;

	while (true)
	{
		cout << "1) s1 â�� / 2) s2 â��  " << endl;
		cin >> targetStorage;

		switch (targetStorage)
		{
		case 1:
			cout << "\n- s1 â�� �Դϴ�. - \n" << endl;
			cout << "0) â�� �������� ���ư��ϴ�. / 1) â�� ä�Ҹ� �ֽ��ϴ�. / 2) â���� ä�Ҹ� �����ϴ�. / 3) â�� �ִ� ä�Ҹ� Ȯ���մϴ�.  " << endl;
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
			cout << "\n- s2 â�� �Դϴ�. -\n" << endl;
			cout << "0) â�� �������� ���ư��ϴ�. / 1) â�� ä�Ҹ� �ֽ��ϴ�. / 2) â���� ä�Ҹ� �����ϴ�. / 3) â�� �ִ� ä�Ҹ� Ȯ���մϴ�.  " << endl;
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
