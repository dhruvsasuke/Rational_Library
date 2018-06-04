# Rational_Library
Rational Library Static header for C++.

The library allows to use rational numbers in your project. The number reduces itself to simplest form automatically.

The rational class uses int as the base data type for storing numerator and denominator.

<h2><b>Constructor</b></h2>
The constructor can be called using any of the fundamental integer types as numerator or denominator.

<h2><b>Examples</h2></b>
rational r; // Constructs with value of 0/1<br>
rational r(3,4); // Constructs with value of 3/4<br>
rational r(3); // Constructs with value of 3/1<br>
rational r('a',3); // Constructs with value of 97/3 (ASCII value of 'a' is 97)<br>
<h2><b>Operators</h2></b>
The class supports arithmatic and relational operators.

<h3><b>Arithmatic Operators </h3></b> +, -, *, /
<h3><b>Relational Operators</h3></b> <, <=, >, >=, ==, !=
The operands can be both rational or fundamental integer types.

<h2><b>I/O Operators</h2></b>
The input and output stream operators are also overloaded for ease of use.

<h2><b>Examples</h2></b>
cin >> a >> b; // a and b are two rational objects<br>
cout << a << b; // a and b are two rational objects<br>
The intput format is x/y (3/4), if the denominator is not specified it is assumed to be 1.<br>

The output format is also similar x/y (3/4).

Other Member Function<br>
Other member functions of the class.<br>

Simplify function for normalizing r.simplify(); // 6/8 is simplified to 3/4<br>
getNum for getting the value of numerator int num = r.getNum(); // returns the value of numerator<br>
getDen for getting the value of denominator int den = r.getDen(); // returns the value of denominator<br>
