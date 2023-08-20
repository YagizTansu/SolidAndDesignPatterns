class IAuthService {
public:
	virtual bool login() = 0;
	virtual bool logout() = 0;
};

class AuthService{
public:
	virtual bool login(IAuthService& auth) { return auth.login(); }
	virtual bool logout(IAuthService& auth) { return auth.logout(); }
};

class CustomerAuth :public IAuthService {
	bool login() { return true; }
	bool logout() { return false; }
};

class DoctorAuth :public IAuthService {
	bool login() { return true; }
	bool logout() { return false; }
};

//int main() {
//	AuthService mainAuth;
//	CustomerAuth customerAuth;
//
//	mainAuth.login(customerAuth);
//}