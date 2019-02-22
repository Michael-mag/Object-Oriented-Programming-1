Problem 5.2 TournamentMember class (2 points)

Imagine that you are in the design stage of a software system for handling the
data of the participants of a major soccer tournament. As different roles will
be present (players, coaches, referees etc.) you are required to develop a class
handling the data of a generic league member.
For each person the following data is at least needed :

• first name as character array (36 characters characters including ’\0’)
• last name as character array (36 characters)
• date of birth as character array (11 characters, storage format is yyyy-mm-dd)

In addition the whole team is located somewhere, so location is an additional
static property of the class.
Design and implement a class for holding these data. In addition add at least
two other general properties to this class.
The class, which will be called TournamentMember, should provide constructors (empty and
parametric), a destructor and also a copy constructor. The class should also provide inline
setter and getter methods (either inside or outside of the class). Moreover, in order to carry out
the functionality of the application, the following methods are required:

• a method which prints the information of a tournament member on the screen,
• a method which changes the location.

Also all constructors and the destructor should print a short informational message on the screen,
such that you can see which is being called when.
You should provide three files: a header file named TournamentMember.h with the declaration
of the class, a file named TournamentMember.cpp with its definition, and an additional file
called testTournamentMember.cpp with a main() function which tests the functionality of
the class.
The needed data can be initialized in the code from the main() function.
