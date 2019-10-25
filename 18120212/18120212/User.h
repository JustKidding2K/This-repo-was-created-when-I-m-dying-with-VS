#ifndef USER_H
#define USER_H
#include "Header.h"
#include "Guest.h"


class  User{
public:
	User();
	virtual ~User();
	inline void setUsername(string name) { mUserName = name; };
	inline void setPassword(string pass) { mPassWord = pass; };
protected:
	string mUserName;
	string mPassWord;
private:
};

#endif // USER_H
