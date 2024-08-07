#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPoint;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(int intValue);
	Fixed(float floatValue);
	Fixed( const Fixed &f );
	~Fixed();

	Fixed&			operator=( const Fixed &copy );
	//  Comparison operators:
	bool			operator>( const Fixed &toCmp ) const;
	bool			operator>=( const Fixed &toCmp ) const;
	bool			operator<( const Fixed &toCmp ) const;
	bool			operator<=( const Fixed &toCmp ) const;
	bool			operator==( const Fixed &toCmp ) const;
	bool			operator!=( const Fixed &toCmp ) const;
	// Arithmetic operators:
	Fixed			operator+( const Fixed &toAdd ) const;
	Fixed			operator-( const Fixed &toSub ) const;
	Fixed			operator*( const Fixed &toMul ) const;
	Fixed			operator/( const Fixed &divBy ) const;
	//  increment/decrement
	Fixed&			operator++();
	Fixed			operator++(int);
	Fixed&			operator--();
	Fixed			operator--(int);

	// Static members
	static			Fixed&	max(Fixed& a, Fixed& b);
	static			Fixed&	min(Fixed& a, Fixed& b);
	static const	Fixed&	max(const Fixed& a, const Fixed& b);
	static const	Fixed&	min(const Fixed& a, const Fixed& b);
	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& cout, const Fixed& fixedObject);
