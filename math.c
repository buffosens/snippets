#define INT_CEIL_DIV(x,y) (((x+y)-1)/y)

#define CEILING_POS(X) ((X - (int)(X)) > 0 ? (int)((X)+1) : (int)(X))
#define CHECK_MINMAX(value, min, max) do{if (((value) < (min)) || ((value) > (max))) return OUT_OF_LIMITS;}while(0)
#define MIN(left, right) (((left) < (right)) ? (left) : (right))
#define MAX(left, right) (((left) > (right)) ? (left) : (right))

#define CEILING_NUM(X, Y) ((((int)((X)%(Y))) == 0) ? (X) : ((((int)((X)/(Y))) * (Y)) + (Y)))
#define FLOOR_NUM(X, Y) (((int)((X)/(Y))) * (Y))

#define VARIABLE_UNUSED(name) (void)name
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof((array)[0]))
#define IS_IN_RANGE(lower,n,upper) (((lower) <= (n)) && ((n) <= (upper)))

#define MAX_INT8_T      ((int8_t(127))
#define MIN_INT8_T      ((int8_t)(-128))
#define MAX_UINT8_T     ((uint8_t)(255U))
#define MIN_UINT8_T     ((uint8_t)(0U))
#define MAX_INT16_T     ((int16_t)(32767))
#define MIN_INT16_T     ((int16_t)(-32768))
#define MAX_UINT16_T    ((uint16_t)(65535U))
#define MIN_UINT16_T    ((uint16_t)(0U))
#define MAX_INT32_T     ((int32_t)(2147483647))
#define MIN_INT32_T     ((int32_t)(-2147483647-1))
#define MAX_UINT32_T    ((uint32_t)(0xFFFFFFFFU))
#define MIN_UINT32_T    ((uint32_t)(0U))

inline bool isOdd(int n);
inline bool isOdd(int n)
{
   return (n & 1) != 0;
}

inline bool isEven(int n);
inline bool isEven(int n)
{
   return (n & 1) == 0;
}

A^B = Log-1(Log(A)*B)
A^B = exp(b ln(a))

abs:

int v;           // we want to find the absolute value of v
unsigned int r;  // the result goes here 
int const mask = v >> sizeof(int) * CHAR_BIT - 1;

r = (v + mask) ^ mask;
r = (v ^ mask) - mask;


