class IAuthServiceLogin {
public:
	virtual bool login() = 0;
};

class IAuthServiceLogout {
public:
	virtual bool logout() = 0;
};

class AuthService {
public:
	virtual bool login(IAuthServiceLogin& auth) { return auth.login(); }
	virtual bool logout(IAuthServiceLogout& auth) { return auth.logout(); }
};

class CustomerAuth :public IAuthServiceLogin,public IAuthServiceLogout {
	bool login() { return true; }
	bool logout() { return false; }
};

class DoctorAuth :public IAuthServiceLogin {
	bool login() { return true; }
};

//int main() {
//	AuthService mainAuth;
//	CustomerAuth customerAuth;
//	DoctorAuth doctorAuth;
//
//	mainAuth.login(customerAuth);
//	mainAuth.login(doctorAuth);
//
//	mainAuth.logout(customerAuth);
//
//}