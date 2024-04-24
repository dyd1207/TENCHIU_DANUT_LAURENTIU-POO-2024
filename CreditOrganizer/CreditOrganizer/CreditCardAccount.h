#pragma once
#include "LoyaltyScheme.h"


using namespace System;

ref class CreditCardAccount
{
public:
	literal String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	initonly long GetAccountNumber();
	void RedeemLoyaltyPoints();

private:
	static double interestRate;
	static int numberOfAccounts = 0;
	long accountNumber;
	double currentBalance;
	double creditLimit;
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object

};

