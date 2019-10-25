#ifndef _BILL_H
#define _BILL_H

#include "Header.h"
#include "Book.h"
#include "ListBook.h"

class ListBook;
class Book;

class Bill
{
private:
	vector<Book> mDanhSachSach;
	int mSoluong;
	int mTien;
public:
	Bill();
	~Bill();
	Bill pNhapBill(ListBook&);
	int pTinhTien();
	void inBill();
	void pHieuchinh();
	void pThemsach(ListBook&);
	void pXoasach(Book);
};

#endif
