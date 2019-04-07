#ifndef NUMBER_CPP
#define NUMBER_CPP

#include <iostream>
#include <vector>

#include "number.h"

Number::Number() {}

Number::Number(std::string s) {
	this->number = s;
}

Number::Number(const Number& n) {
	this->number = n.number;
}

Number Number::operator+(Number n) {
	int minLength, maxLength;

	if (this->lenght() < n.length()) {
		minLength = this->length();
		maxLength = n.length();
	} else {
		minLength = n.length();
		maxLength = this->length();
	}

	std::vector<char> result(maxLength, '0');

	int carry = 0;

	for (int index = 0; index < minLength; ++index) {
		int left = this->getDigit(index),
			right = n.getDigit(index);

		int result = left + right + carry;

		// In progress...		
	}
}




void Number::deleteLeftZeros() {
	int index = -1;

	while (this->number[++index] == '0') {}
	
	std::string result(this->number.begin() + index, this->number.end());

	this->number = result;
}

std::istream& operator>> (std::istream& is, Number& n) {
	is >> n.number;

	return is;
}

std::ostream& operator<< (std::ostream& os, const Number& n) {
	os << n.number;

	return os;
}

#endif
