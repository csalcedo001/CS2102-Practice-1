#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number {
	private:
	std::string number;

	public:
	Number();
	Number(std::string s);
	Number(const Number& n);

	inline int const length() const {
		return this->number.length();
	}

	inline int const getDigit(int n) const {
		return n < this->length() && n >= 0 ? this->number[this->length() - n - 1] - '0' : 0;
	}

	Number operator+ (Number n);
	Number operator* (Number n);
	Number operator= (Number n);

	friend std::istream& operator>> (std::istream& is, Number& n);
	friend std::ostream& operator<< (std::ostream& os, const Number& n);

	private:
	void deleteLeftZeros();
	void addDigits(Number n, int pos);
};

#endif
