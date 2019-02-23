#pragma once

#include <cstdint>
#include <vector>
#include <iosfwd>
#include <stdexcept>
#include <algorithm>
#include <sstream>
#include <cctype>

class Number
{
public:
	typedef std::uint32_t Digit;
	typedef std::uint64_t Wigit;
	static const unsigned BITS = 32;

	Number(Digit u = 0);
	Number(const std::string& s);
	Number(const Number& copy);

	void divide(Number v, Number& q, Number& r) const;
	Number and_not(const Number& v) const;

	Number operator++ (int);
	Number& operator++ ();
	Number operator-- (int);
	Number& operator-- ();

	friend Number operator+ (Number u, const Number& v);
	friend Number operator- (Number u, const Number& v);
	friend Number operator* (const Number& u, const Number& v);
	friend Number operator% (const Number& u, const Number& v);
	friend Number operator/ (const Number& u, const Number& v);

	Number& operator= (const Number& rhs);
	Number& operator<<= (size_t rhs);
	Number& operator>>= (size_t rhs);
	Number& operator+= (const Number& rhs);
	Number& operator-= (const Number& rhs);
	Number& operator*= (const Number& rhs);
	Number& operator%= (const Number& rhs);
	Number& operator/= (const Number& rhs);
	Number& operator&= (const Number& rhs);
	Number& operator^= (const Number& rhs);
	Number& operator|= (const Number& rhs);

	friend std::ostream& operator<< (std::ostream& os, const Number& u);
	friend std::istream& operator>> (std::istream& is, Number& u);

	friend Number operator<< (Number u, size_t v);
	friend Number operator>> (Number u, size_t v);

	friend Number operator& (Number u, const Number& v);
	friend Number operator| (Number u, const Number& v);
	friend Number operator^ (Number u, const Number& v);

	friend bool operator< (const Number& u, const Number& v);
	friend bool operator> (const Number& u, const Number& v);
	friend bool operator<= (const Number& u, const Number& v);
	friend bool operator>= (const Number& u, const Number& v);
	friend bool operator== (const Number& u, const Number& v);
	friend bool operator!= (const Number& u, const Number& v);

	// Return 1 + floor(log2(u)), or 0 for u == 0.
	int bits() const;
	Digit to_uint() const;
	std::string to_string() const;

private:
	std::vector<Digit> digits;

	void trim();
};