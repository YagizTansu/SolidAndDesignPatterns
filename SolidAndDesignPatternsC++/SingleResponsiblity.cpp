#include <iostream>

class UserService {
public:
	std::string userFirstName;
	std::string userSecondName;

	std::string setName() { return ""; }

	//bool login() { return true; }
	//bool logout() { return false; }
};


class AuthService {
public:
	bool login() { return true; }
	bool logout() { return false; }
};
