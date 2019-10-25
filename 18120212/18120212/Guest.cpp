#include "Guest.h"

Guest::Guest()
{
	//ctor
}

Guest::~Guest()
{
	//dtor
}

void Guest::pTimSach(ListBook& a) {
	cout << "Nhap vao ma quyen sach ban muon tim: ";

	char* tempCode = new char;
	cin >> tempCode;

	vector<int> res;
	a.pSearchBook(tempCode, res, 0);
	if (res.size() == 0) cout << "Khong tim duoc quyen sach ban can";
	else {
		Book tempBook;
		tempBook = a.pInfoBook(res[0]);
		tempBook.pOuput();
	}
	cout << endl;
	system("pause");

}
