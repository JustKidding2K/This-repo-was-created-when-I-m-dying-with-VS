#ifndef _BOOK_H
#define _BOOK_H


#include "Header.h"
class Book
{
private:
	char mName[100];
	char mCode[15];
	int mPrice;
public:
	Book();
	~Book();
	Book(char* name, char* code, int price);

	void pInput();
	void pOuput();

	void pSetName(char*);
	void pSetCode(char*);
	void pSetPrice(int);

	char* pGetName();
	char* pGetCode();
	int pGetPrice();

	Book& operator=(const Book&);
	//bool operator==(Book);

};
#endif 