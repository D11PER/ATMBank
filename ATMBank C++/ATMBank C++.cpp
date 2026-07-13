#include <iostream>
#include <string>
using namespace std;

#define MAX_ACCOUNTS 100

class ATMBank {
private:
	double balance;
	string name;
	int numcard;

public:

	//Constuctor
	ATMBank(const string& nm, double b, int nc) : name(nm), balance(b), numcard(nc) {}

	//Default Constructor
	ATMBank() : name(""), balance(0.0), numcard(0) {}

	//Getters
	const string& getName() const {
		return name;
	}

	double getBalance() const {
		return balance;
	}

	int getNumCard() const {
		return numcard;
	}



	//Setters
	void setName(const string& nm) {
		name = nm;
	}

	void setBalance(double p) {
		balance = p;
	}

	void setNumCard(int nc) {
		numcard = nc;
	}


	//Methods:

	//num1
	void balanceCheck() {
		cout << "Balance: " << balance << endl;
	}

	void showAccountInfo() {
		cout << "Name: " << name << ", Balance: " << balance << ", Card Number: " << numcard << endl;
	}

	//num2
	void deposit(double amount);

	//num3
	void withdraw(double amount);

	//num4
	void addAccount(const string& nm, double b, int nc);

	//num5
	void delleteAccount(const string& nm, double b, int nc);


};

// deposit and withdraw

void ATMBank::deposit(double amount) {
	if (balance > 0) {
		this->balance += amount;
		cout << "Deposited: " << amount << endl;

	}
	else {
		cout << "Invalid deposit amount." << endl;
	}
}

void ATMBank::withdraw(double amount) {
	if (amount <= balance) {
		balance -= amount;
		cout << "Withdrew: " << amount << endl;
	}
	else {
		cout << "Insufficient funds." << endl;
	}
}

void ATMBank::addAccount(const string& nm, double b, int nc) {
	cout << " Account added: " << nm << endl;
	cout << "Balance: " << b << endl;
	cout << "Card Number: " << nc << endl;
}

void ATMBank::delleteAccount(const string& nm, double b, int nc) {
	cout << " Account deleted: " << nm << endl;
	cout << "Balance: " << b << endl;
	cout << "Card Number: " << nc << endl;
}

int main() {

	// Array of Memmbers of ATMBank class

	ATMBank accounts[MAX_ACCOUNTS];
	int accountCount = 4;

	accounts[0] = ATMBank("John", 1000.0, 12345);
	accounts[1] = ATMBank("Mary", 2000.0, 54321);
	accounts[2] = ATMBank("Bob", 500.0, 67890);
	accounts[3] = ATMBank("Denis", 3000.0, 65768);






	while (true) {
		cout << "\n=====================================\n";
		cout << "              ATM MENU               \n";
		cout << "=====================================\n";
		cout << " [1]  Show All Accounts\n";
		cout << " [2]  Show Account Info\n";
		cout << " [3]  Check Balance\n";
		cout << " [4]  Deposit Money\n";
		cout << " [5]  Withdraw Money\n";
		cout << " [6]  Add Account\n";
		cout << " [7]  Dellete Account\n";
		cout << " [0]  Exit\n";
		cout << "=====================================\n";
		cout << " Enter your choice: ";

		int choice;
		cin >> choice;

		if (choice == 0) {
			cout << "Exiting the program." << endl;
			break;
		}

		//num 1 - Show All Accounts
		else if (choice == 1) {
			for (int i = 0; i < accountCount; i++) {
				accounts[i].showAccountInfo();
			}
		}


		//num 2 - Show Account Info
		else if (choice == 2) {
			int accountIndex;
			cout << "Enter account index (1-4): " << endl;
			cin >> accountIndex;

			if (accountIndex == 1) {
				accounts[0].showAccountInfo();
			}
			else if (accountIndex == 2) {
				accounts[1].showAccountInfo();
			}
			else if (accountIndex == 3) {
				accounts[2].showAccountInfo();
			}
			else if (accountIndex == 4) {
				accounts[3].showAccountInfo();
			}
			else {
				cout << "Invalid account index." << endl;
			}
		}

		//num 3 - Check Balance
		else if (choice == 3) {

			int accountIndex;
			cout << "Enter account index (1-4): " << endl;
			cin >> accountIndex;

			if (accountIndex == 1) {
				accounts[0].balanceCheck();
			}
			else if (accountIndex == 2) {
				accounts[1].balanceCheck();
			}
			else if (accountIndex == 3) {
				accounts[2].balanceCheck();
			}
			else if (accountIndex == 4) {
				accounts[3].balanceCheck();
			}
			else {
				cout << "Invalid account index." << endl;
			}

		}

		//num 4 - Deposit Money
		else if (choice == 4) {
			int accountIndex;
			cout << "Enter account index (1-4): " << endl;
			cin >> accountIndex;

			int amount;
			cout << "Enter deposit amount: " << endl;
			cin >> amount;

			if (accountIndex == 1) {
				accounts[0].deposit(amount);
			}
			else if (accountIndex == 2) {
				accounts[1].deposit(amount);
			}
			else if (accountIndex == 3) {
				accounts[2].deposit(amount);
			}
			else if (accountIndex == 4) {
				accounts[3].deposit(amount);
			}
			else {
				cout << "Invalid account index." << endl;
			}
		}

		//num 5 - Withdraw Money
		else if (choice == 5) {
			int accountIndex;
			cout << "Enter account index (1-4): " << endl;
			cin >> accountIndex;

			int amount;
			cout << "Enter withdraw amount: " << endl;
			cin >> amount;


			if (accountIndex == 1) {
				accounts[0].withdraw(amount);
			}
			else if (accountIndex == 2) {
				accounts[1].withdraw(amount);
			}
			else if (accountIndex == 3) {
				accounts[2].withdraw(amount);
			}
			else if (accountIndex == 4) {
				accounts[3].withdraw(amount);
			}
			else {
				cout << "Invalid account index." << endl;
			}
		}

		//num 6 - Add Account
		else if (choice == 6) {
			string name;
			double balance;
			int numcard;
			cout << "Enter account name: ";
			cin >> name;
			cout << "Enter initial balance: ";
			cin >> balance;
			cout << "Enter card number: ";
			cin >> numcard;

			if (accountCount < MAX_ACCOUNTS) {
				accounts[accountCount] = ATMBank(name, balance, numcard);
				accountCount++;
				cout << "Account successfully added!" << endl;
			}
			else {
				cout << "Account limit reached." << endl;
			}
		}

		//num 7 - Dellete Account
		else if (choice == 7) {
			string name;
			double balance;
			int numcard;
			cout << "Enter account name: ";
			cin >> name;
			cout << "Enter initial balance: ";
			cin >> balance;
			cout << "Enter card number: ";
			cin >> numcard;

			for (size_t i = 0; i < accountCount - 1; i++)
			{
				accounts[i] = accounts[i + 1];
			}
			accountCount--;
			cout << "Account successfully deleted!" << endl;
		}

	}


} 
