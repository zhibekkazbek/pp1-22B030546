//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false. When the value is returned, true = 1 and false = 0

//When you do not want others (or yourself) to override existing variable values, use the const keyword 
//(this will declare the variable as "constant", which means unchangeable and read-only):
//const int minutesPerHour = 60;
//const float PI = 3.14;

/*
+= ->   x += 3 ->   x = x + 3	
-= ->   x -= 3 ->   x = x - 3	
*= ->   x *= 3 ->   x = x * 3	
/= ->   x /= 3 ->   x = x / 3	
%= ->   x %= 3 ->   x = x % 3	
&= ->   x &= 3 ->   x = x & 3	
|= ->   x |= 3 ->   x = x | 3	
^= ->   x ^= 3 ->	x = x ^ 3	
>>= ->  x >>= 3	->  x = x >> 3	
<<= ->  x <<= 3 ->	x = x << 3  */

//string myString = "Hello";
//cout << myString[0];
// Outputs H

//string myString = "Hello";
//myString[0] = 'J';
//cout << myString;
// Outputs Jello instead of Hello

/*
abs(x)	        Returns the absolute value of x
acos(x)	        Returns the arccosine of x
asin(x)	        Returns the arcsine of x
atan(x)	        Returns the arctangent of x
cbrt(x)	        Returns the cube root of x
ceil(x)	        Returns the value of x rounded up to its nearest integer
cos(x)	        Returns the cosine of x
cosh(x)	        Returns the hyperbolic cosine of x
exp(x)	        Returns the value of Ex
expm1(x)	    Returns ex -1
fabs(x)	        Returns the absolute value of a floating x
fdim(x, y)	    Returns the positive difference between x and y
floor(x)	    Returns the value of x rounded down to its nearest integer
hypot(x, y)	    Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	    Returns the highest value of a floating x and y
fmin(x, y)	    Returns the lowest value of a floating x and y
fmod(x, y)	    Returns the floating point remainder of x/y
pow(x, y)	    Returns the value of x to the power of y
sin(x)	        Returns the sine of x (x is in radians)
sinh(x)	        Returns the hyperbolic sine of a double value
tan(x)	        Returns the tangent of an angle
tanh(x)	        Returns the hyperbolic tangent of a double value    */

//variable = (condition) ? expressionTrue : expressionFalse;
//int time = 20;
//string result = (time < 18) ? "Good day." : "Good evening.";
//cout << result;

/*int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)*/

/*int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend"*/