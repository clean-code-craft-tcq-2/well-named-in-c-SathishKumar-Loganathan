#include <stdio.h>
#include "ColorCode_for_Telecommunications.h"

#define MAX_COLORPAIR_NAME_CHARS 25

void printWiringManual(void)
{
	ColorPair colorPair;
	char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	
	printf("Pair No. \tMajor Color \t Minor Color");
	for(int loopCount = 1; i <= MAX_PAIR_NUMBER_LIMIT; i++)
	{
		colorPair = GetColorFromPairNumber(loopCount);
		ColorPairToString(&colorPair, colorPairNames);
    	printf("%d \t%s \t%s\n", loopCount, colorPairNames.majorColor , colorPair.minorColor);
	}
}
