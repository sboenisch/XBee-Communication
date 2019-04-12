#include	<iostream>
using namespace std;
#include<string>
#include<stdlib.h>
#include"SerialPort.h"

char output[MAX_DATA_LENGTH];
char *port = "\\\\.\\COM4";
char incoming[MAX_DATA_LENGTH];


int main() {
	//
	SerialPort xbee(port);
	if (xbee.isConnected()) {
		cout << "Connection is Established";

	}
	else {
		cout << "Error in port name";
	}
	while (xbee.isConnected()) {
		string command;
		cin >> command;
		//.....
	}



	return 0;
}