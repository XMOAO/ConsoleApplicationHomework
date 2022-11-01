// ConsoleApplication1.c : This le contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>



void main()
{
	struct Things
	{
		int i;
		char p;
		char* Str;

		
	};
	double i2 = 5.0f;

	struct Things Test2 = {.i = 1,.p ='a'};
	Test2.i = 1;

	Test2.Str = "sbsq";
	struct Things* Test3;
	Test3 = &Test2;

	(Test3->Str) = Test3->Str[0];
	(Test2.p)++;
	

	printf("(*Test3).i: %d \n", (*Test3).i);
	printf("Test3->i: %d \n", Test3->i);

	printf("Test2.p: %c \n", Test2.p);
	printf("i2: %lf \n", i2);






}



