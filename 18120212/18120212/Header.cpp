#include "Header.h"
#include "Guest.h"
#include "Book.h"
#include "ListBook.h"
#include "Bill.h"
#include "User.h"

int inMenu(ListBook& a) {
	system("CLS");
	cout << "1.Nhap sach" << endl;
	cout << "2.Chinh sua" << endl;
	cout << "3.Nhap hoa don" << endl;
	cout << "4.Tim sach" << endl;
	cout << "Other.Thoat" << endl;
	int cmd;
	cin >> cmd;
	switch (cmd)
	{
	case 1: {
		a.pInputBook();
		return 0;
		break;
	}
	case 2: {
		char* key = new char;
		cout << "Nhap vao ma sach: ";
		cin.getline(key, 15);
		cin.ignore();

		int price;
		cout << "Nhap vao gia sach moi: ";
		cin >> price;
		a.pEditBook(key, price);
		return 0;
		break;
	}
	case 3: {
		Bill tempBill;
		tempBill.pNhapBill(a);
		tempBill.pTinhTien();
		tempBill.inBill();
		return 0;
		break;
	}
	case 4: {
		Guest tempGuest;
		tempGuest.pTimSach(a);
		return 0;
		break;
	}
	case 5: {
		User tempUser;
		string tempString;

		cout << "Username: ";
		cin >> tempString;
		tempUser.setUsername(tempString);

		cout << "Pass: ";
		cin >> tempString;
		tempUser.setPassword(tempString);

		cout << "Dang nhap thanh cong! " << endl;

		Bill tempBill;
		tempBill.pNhapBill(a);
		tempBill.pTinhTien();
		tempBill.inBill();

		return 0;
		break;
	}
	default: {
		return 1;
		break;
	}
	}
}

