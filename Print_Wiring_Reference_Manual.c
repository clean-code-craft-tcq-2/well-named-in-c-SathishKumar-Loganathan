#include <stdio.h>
#include "ColorCode_for_Telecommunications.h"

#define MAX_PAIR_NUMBER_LIMIT 25

void printWiringManual(void)
{
	ColorPair colorPair;
	
	printf("\n*****Wiring Reference Manual*****");
	printf("\nPair No. \tMajor Color \tMinor Color");
	for(int loopCount = 1; loopCount <= MAX_PAIR_NUMBER_LIMIT; loopCount++)
	{
		colorPair = GetColorFromPairNumber(loopCount);
    		printf("\n%d \t\t%s \t\t%s", loopCount, MajorColorNames[colorPair.majorColor] , MinorColorNames[colorPair.minorColor]);
	}
}
