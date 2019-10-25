#include "Book.h"

Book::Book()
{
	/*char* mName = new char[100];
	char* mCode = new char[15];
	strcpy(mName, "notyet");
	strcpy(mCode, "notyet");
	mPrice = 0;*/
}

Book::Book(char* name, char* code, int price)
{
	if ((name == NULL) || (code == NULL))
	{
		char* mName = new char[100];
		char* mCode = new char[15];
		strcpy(mName, "notyet");
		strcpy(mCode, "notyet");
		mPrice = 0;
	}
	strcpy(mName, name);
	strcpy(mCode, code);
	mPrice = price;
}

Book& Book:: operator=(const Book& a) {
	if (this == &a)return *this;
	strcpy(this->mCode, a.mCode);
	strcpy(this->mName, a.mName);
	this->mPrice = a.mPrice;
	return *this;

}

Book::~Book()
{
}
void Book::pSetName(char* a) {
	strcpy(mName, a);
}

void Book::pSetCode(char* a) {
	strcpy(mCode, a);
}

void Book::pSetPrice(int a) {
	mPrice = a;

}
char* Book::pGetName() {
	return mName;

}
char* Book::pGetCode() {
	return mCode;
}
int Book::pGetPrice() {
	return mPrice;

}

//bool Book :: operator == (Book a) {
//	if (strcmp(this->pGetCode, a.pGetCode) == 0)return 1;
//	return 0;
//}
void Book::pInput() {
	cout << "Nhap vao ten sach: ";
	cin.ignore();
	cin.getline(mName, 100);

	cout << "Nhap vao code sach: ";
	cin.getline(mCode, 15);
	cout << "Nhap vao gia tien sach: ";
	cin >> mPrice;

}

void Book::pOuput() {
	cout << endl;
	cout << "Ten sach : " << mName << endl;
	cout << "Ma sach : " << mCode << endl;
	cout << "Gia tien:" << mPrice << endl;
	cin.get();
}