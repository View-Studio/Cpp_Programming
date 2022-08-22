#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <winsock2.h>
#include <time.h>

using namespace std;

#pragma comment(lib, "ws2_32.lib") //dll 호출 하기 lib

int main()
{
	WSAData wsaData;

	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN ServerAddr;
	memset(&ServerAddr, 0, sizeof(SOCKADDR));
	ServerAddr.sin_family = PF_INET;
	ServerAddr.sin_addr.s_addr = INADDR_ANY;
	ServerAddr.sin_port = htons(3000);

	bind(ServerSocket, (SOCKADDR*)&ServerAddr, sizeof(ServerAddr));

	listen(ServerSocket, 0);

	while (1)
	{
		SOCKADDR_IN ClientAddr;
		memset(&ClientAddr, 0, sizeof(SOCKADDR));
		int ClientAddrLength = sizeof(ClientAddr);

		SOCKET ClientSocket = accept(ServerSocket, (SOCKADDR*)&ClientAddr, &ClientAddrLength);

		srand((unsigned int)time(nullptr));

		int f = rand() % 100 + 1;
		int s = rand() % 100 + 1;
		int m = rand() % 4;
		int result = 0;
		string ResultString;

		char Buffer[2049] = { 0, };

		if (m == 0)
		{
			result = f + s;
			sprintf(Buffer, "%d+%d", f, s);
			ResultString = to_string(result);
		}
		else if (m == 1)
		{
			result = f - s;
			sprintf(Buffer, "%d-%d", f, s);
			ResultString = to_string(result);
		}
		else if (m == 2)
		{
			result = f * s;
			sprintf(Buffer, "%d*%d", f, s);
			ResultString = to_string(result);
		}
		else if (m == 3)
		{
			result = f / s;
			sprintf(Buffer, "%d/%d", f, s);
			ResultString = to_string(result);
		}

		int SendLength = send(ClientSocket, Buffer, strlen(Buffer) + 1, 0);
		cout << Buffer << endl;
		memset(&Buffer, 0, sizeof(Buffer));
		int RecvLength = recv(ClientSocket, Buffer, sizeof(Buffer) - 1, 0);
		cout << Buffer << endl;

		if (strcmp(Buffer, ResultString.c_str()) == 0)
		{
			const char Message[] = "Just Kidding.";
			SendLength = send(ClientSocket, Message, strlen(Message) + 1, 0);
		}
		closesocket(ClientSocket);
	}

	closesocket(ServerSocket);

	WSACleanup();

	return 0;
}