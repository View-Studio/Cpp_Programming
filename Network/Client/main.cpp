#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include <string>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSAData WsaData;
	WSAStartup(MAKEWORD(2, 2), &WsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN ServerSockAddr;
	memset(&ServerSockAddr, 0, sizeof(SOCKADDR_IN));
	ServerSockAddr.sin_family = PF_INET;
	ServerSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	ServerSockAddr.sin_port = htons(3000); //byte order to network byte order
	connect(ServerSocket, (SOCKADDR*)&ServerSockAddr, sizeof(SOCKADDR_IN));

	char Buffer[1024] = { 0, };
	recv(ServerSocket, Buffer, sizeof(Buffer) - 1, 0);

	string Message = Buffer;

	cout << Message << endl;

	int Result = 0;
	if (Message.find('+') != string::npos)
	{
		string First = Message.substr(0, Message.find('+'));
		string Second = Message.substr(Message.find('+') + 1, Message.length() - Message.find('+'));
		cout << First << '+' << Second << endl;
		Result = stoi(First) + stoi(Second);
	}

	if (Message.find('-') != string::npos)
	{
		string First = Message.substr(0, Message.find('-'));
		string Second = Message.substr(Message.find('-') + 1, Message.length() - Message.find('-'));
		cout << First << '-' << Second << endl;
		Result = stoi(First) - stoi(Second);
	}

	if (Message.find('*') != string::npos)
	{
		string First = Message.substr(0, Message.find('*'));
		string Second = Message.substr(Message.find('*') + 1, Message.length() - Message.find('*'));
		cout << First << '*' << Second << endl;
		Result = stoi(First) * stoi(Second);
	}

	if (Message.find('/') != string::npos)
	{
		string First = Message.substr(0, Message.find('/'));
		string Second = Message.substr(Message.find('/') + 1, Message.length() - Message.find('/'));
		cout << First << '/' << Second << endl;
		Result = stoi(First) / stoi(Second);
	}

	cout << Result << endl;

	string ResultString = to_string(Result);

	send(ServerSocket, ResultString.c_str(), ResultString.length(), 0);

	recv(ServerSocket, Buffer, sizeof(Buffer) - 1, 0);

	cout << "Answer :" << Buffer << endl;


	closesocket(ServerSocket);

	WSACleanup();

	return 0;
}