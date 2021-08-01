/*Macros are a piece of code in a program which is given some name.
 Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code.
  The ‘#define’ directive is used to define a macro.
  Let us now understand the macro definition with the help of a program:*/
  #include <iostream>

#define LIMIT 5
int main()
{
	for (int i = 0; i < LIMIT; i++) {
		std::cout << i << "\n";
	}

	return 0;
}
