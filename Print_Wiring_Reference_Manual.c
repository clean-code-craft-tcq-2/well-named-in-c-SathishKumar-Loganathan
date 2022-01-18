#include <stdio.h>
#include "ColorCode_for_Telecommunications.h"

#define MAX_PAIR_NUMBER_LIMIT 25

void printWiringManual(void)
{
	ColorPair colorPair;
	char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	
	printf("Pair No. \tMajor Color \t Minor Color");
	for(int loopCount = 1; loopCount <= MAX_PAIR_NUMBER_LIMIT; loopCount++)
	{
		colorPair = GetColorFromPairNumber(loopCount);
    		printf("%d \t%s \t%s\n", loopCount, MajorColorNames[colorPair.majorColor] , MinorColorNames[colorPair.minorColor]);
	}
}
