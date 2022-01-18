enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;

extern const char* MinorColorNames[];
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const int MAX_COLORPAIR_NAME_CHARS;

void testNumberToPair(int, enum MajorColor, enum MinorColor);
void testPairToNumber(enum MajorColor, enum MinorColor, int);
ColorPair GetColorFromPairNumber(int pairNumber);
void printWiringManual(void);
