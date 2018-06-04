# Rational_Library
Rational Library Static header for C++.

The library allows to use rational numbers in your project. The number reduces itself to simplest form automatically.

The rational class uses int as the base data type for storing numerator and denominator.

Constructor
The constructor can be called using any of the fundamental integer types as numerator or denominator.

Examples
rational r; // Constructs with value of 0/1
rational r(3,4); // Constructs with value of 3/4
rational r(3); // Constructs with value of 3/1
rational r('a',3); // Constructs with value of 97/3 (ASCII value of 'a' is 97)
Operators
The class supports arithmatic and relational operators.

Arithmatic Operators +, -, *, /
Relational Operators <, <=, >, >=, ==, !=
The operands can be both rational or fundamental integer types.

I/O Operators
The input and output stream operators are also overloaded for ease of use.

Examples
cin >> a >> b; // a and b are two rational objects
cout << a << b; // a and b are two rational objects
The intput format is x/y (3/4), if the denominator is not specified it is assumed to be 1.

The output format is also similar x/y (3/4).

Other Member Function
Other member functions of the class.

Simplify function for normalizing r.simplify(); // 6/8 is simplified to 3/4
getNum for getting the value of numerator int num = r.getNum(); // returns the value of numerator
getDen for getting the value of denominator int den = r.getDen(); // returns the value of denominator
Other Utility functions
Other functions defined as utility for the class.

abs for absolute a = abs(b); // -3/4 returns 3/4
simplify function to simplify fractions a.simplify() // 2/4 returns 1/2
