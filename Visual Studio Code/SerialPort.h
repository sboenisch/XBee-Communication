#ifndef SERIALPORT_H
#define	SERIALPORT_H

#define	XBEE_WAIT_TIME 2000
#define	MAX_DATA_LENGTH 255

#include	<windowsx.h>
#include	<stdio.h>
#include	<stdlib.h>

class SerialPort
{
private:
	HANDLE handler;
	bool	connected;
	COMSTAT	status;
	DWORD	erros;

public:
	SerialPort(char *portName);
	~SerialPort();

	int readSerialPort(char *buffer, unsigned int buf_size);
	bool writeSerialPort(char *buffer, unsigned int buf_size);
	bool isConnected();

};

#endif	//	SERIALPORT_H