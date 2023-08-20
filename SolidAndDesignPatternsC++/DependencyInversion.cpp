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

class CustomerAuth :public IAuthServiceLogin, public IAuthServiceLogout {
	bool login() { return true; }
	bool logout() { return false; }
};

class DoctorAuth :public IAuthServiceLogin {
	bool login() { return true; }
};


class IMessage
{
public:
	virtual void Send() = 0;
};


class Email: public IMessage {
	public:
		void Send(){}
};

class SMS :public IMessage {
	public:
		void Send() {}
};

class Phone :public IMessage {
public:
	void Send() {}
};


class Notification {
public:
	void Send(IMessage& msg) {
		msg.Send();
	}
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
//	Notification note;
//
//	Email mail;
//	SMS sms;
//	Phone phone;
//
//	note.Send(mail);
//	note.Send(sms);
//	note.Send(phone);
//}