#include "Bill.h"



Bill::Bill()
{
}


Bill::~Bill()
{
}
void Bill::pThemsach(ListBook& a) {
	Book b;
	vector<int>res;
	int price;
	int id;
	char* temp = new char[15];
	cout << "Nhap vao ma sach : ";
	cin.getline(temp, 15);
	a.pSearchBook(temp, res, 0);
	if (res.size() == 0) {
		cout << "Khong tim duoc ";
		cin.ignore();
		return;
	}
	b.pSetCode(temp);

	id = res.back();
	res.pop_back();
	cout << "Ten sach la: " << a.pInfoBook(id).pGetName() << endl;
	b.pSetName(a.pInfoBook(id).pGetName());

	cout << "Gia tien la: " << a.pInfoBook(id).pGetPrice() << endl;
	b.pSetPrice(a.pInfoBook(id).pGetPrice());
	//cout << "Nhap vao ten sach : ";
	//cin.getline(temp, 100);
	//b.pSetName(temp);

	mDanhSachSach.push_back(b);
}
Bill Bill::pNhapBill(ListBook& a) {
	cout << "Nhap vao so luong sach muon mua: ";
	cin >> mSoluong;

	Book b;
	vector<int>res;
	int price;
	int id;
	char* temp = new char[15];
	if (mSoluong <= 0)return *this;
	for (int i = 0; i < mSoluong; i++) {
		cout << "Quyen thu " << i + 1 << " :" << endl;

		cin.ignore();

		cout << "Nhap vao ma sach : ";
		cin.getline(temp, 15);
		a.pSearchBook(temp, res, 0);
		if (res.size() == 0) {
			cout << "Khong tim duoc ";
			cin.ignore();
			continue;
		}
		b.pSetCode(temp);

		id = res.back();
		res.pop_back();
		cout << "Ten sach la: " << a.pInfoBook(id).pGetName() << endl;
		b.pSetName(a.pInfoBook(id).pGetName());

		cout << "Gia tien la: " << a.pInfoBook(id).pGetPrice() << endl;
		b.pSetPrice(a.pInfoBook(id).pGetPrice());
		//cout << "Nhap vao ten sach : ";
		//cin.getline(temp, 100);
		//b.pSetName(temp);

		mDanhSachSach.push_back(b);

	}
	mSoluong = mDanhSachSach.size();
	return *this;
}

int Bill::pTinhTien() {
	mTien = 0;
	for (int i = 0; i < mDanhSachSach.size(); i++) {
		mTien += mDanhSachSach[i].pGetPrice();
	}
	return mTien;
}

void Bill::inBill() {
	pTinhTien();
	cout << "-------Hoa-Don--------" << endl;
	for (int i = 0; i < mSoluong; i++) {
		cout << mDanhSachSach[i].pGetName() << endl;
		cout << mDanhSachSach[i].pGetCode() << endl;
		cout << mDanhSachSach[i].pGetPrice() << endl;
		cout << endl;
	}
	cout << "Tong: " << mTien;
}

void Bill::pHieuchinh() {
	int cmd = 0;
	while (cmd != 3) {
		cout << "1.Them sach\n";
		cout << "2.Xoa sach\n";
		cin >> cmd;
		switch (cmd) {
		case 1:

			break;
		case 2:
			break;
		default:
			break;
		}

	}
}
