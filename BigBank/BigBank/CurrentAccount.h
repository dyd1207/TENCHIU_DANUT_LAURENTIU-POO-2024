#pragma once

#include "BankAccount.h"

ref class CurrentAccount : BankAccount
{
public:
	CurrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();
	//Choose to overrdei ToString
	virtual String^ ToString() override;
	//HAve to override CanDebit
	virtual bool CanDebit(double amount) override;
private:
	double overdraftLimit;
};
