// c++98
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>
# include <stdlib.h>

using std::string;
using std::cout;
using std::endl;

enum	ScalarType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN_INF,
	INVALID
};

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& obj);
	ScalarConverter& operator=(const ScalarConverter& obj);
	~ScalarConverter();
public:
	static	ScalarType	_getType(string& value);
	static void	convert(string& value);
};

#endif // SCALARCONVERTER_HPP