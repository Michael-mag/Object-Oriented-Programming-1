Problem 3.6 A Complex class (2 points)
Create a class named Complex for storing and managing complex numbers. A complex number
has an real part and an imaginary part. The class has to provide a default constructor initializing
the properties by 0, another constructor for setting the properties with specific values, a copy
constructor and an empty destructor. Provide suitable setter and getter methods for each property and a method for printing the complex number on the screen in its mathematical form (e.g.,
1 + 2i, 3 − 5i). Also provide methods for the conjugation of a complex number, and for adding,
subtracting and multiplying two complex numbers. The class declaration has to be placed into
Complex.h, the class definition has to be placed into Complex.cpp and the test program where
the instances are created has to be in testcomplex.cpp. The test program should create at least
two instances of the Complex class, the data for the properties should be read from the keyboard.
Then:
a) the conjugate of the first instance should be determined and printed on the screen;
b) the sum of the two instances should be determined and printed on the screen;
c) the difference between the second and first instance should be determined and printed on
the screen;
d) the multiplication of the two instances should be determined and printed on the screen.
The prototypes of the methods for adding, subtracting and multiplying must have the following
form:
Complex Complex::add(Complex);
Then the usage will be the following:
Complex c1, c2, c3;
...
c3 = c1.add(c2);
Note: If z = a + bi then z = a − bi. If z1 = a + bi and z2 = c + di then z1 + z2 = (a + c) + (b + d)i,
z1 − z2 = (a − c) + (b − d)i and z1 · z2 = (a · c − b · d) + (b · c + a · d)i.
You can assume that the input will be valid.
