//1
#include <stdio.h>
#include <string.h>

/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
  return !(~((1<<31) ^ x));
}

//2
/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void) {
  int x = 5;
  int x2 = (x << 4) | x;
  int x3 = (x2 << 8) | x2;
  int x4 = (x3 << 16) | x3;
  return x4;
}

//3
/* 
 * isEqual - return 1 if x == y, and 0 otherwise 
 *   Examples: isEqual(5,5) = 1, isEqual(4,5) = 0
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int isEqual(int x, int y) {
  return x & y;
}
//4
/* 
 * fitsBits - return 1 if x can be represented as an 
 *  n-bit, two's complement integer.
 *   1 <= n <= 32
 *   Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int fitsBits(int x, int n) {
  return !(((x << (32 - n)) >> (32-n)) ^ x);
}

//5
/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
  // create a mask 111111 if x!=0, 000000 if x==0
  int isFalse = !x; // 0 if x!= 0 
  int mask = ~0 + isFalse; // 11111 + 0 if x!= 0
  
  return (mask & y) | (~mask & z);
}
//6 
/* 
 * isGreater - if x > y  then return 1, else return 0 
 *   Example: isGreater(4,5) = 0, isGreater(5,4) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isGreater(int x, int y) {
  int xSuby = x + ~y + 1;
  
  int isSameSign = ((((~xSuby) & (~x | y)) | ((~x)&y)) >> 31) & 1;
  return (!!xSuby) & isSameSign;
}
//7
/*
 * multFiveEighths - multiplies by 5/8 rounding toward 0.
 *   Should exactly duplicate effect of C expression (x*5/8),
 *   including overflow behavior.
 *   Examples: multFiveEighths(77) = 48
 *             multFiveEighths(-22) = -13
 *             multFiveEighths(1073741824) = 13421728 (overflow)
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 3
 */
int multFiveEighths(int x) {
  int fiveX = (x << 2) + x;
  int mask = (fiveX >> 31) & 7;
  int result = (fiveX + mask) >> 3;
  return (result);
}

//8
/* 
 * logicalNeg - implement the ! operator, using all of 
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int logicalNeg(int x) {
  return 2;
}
//9
/* 
 * twosComp2SignMag - Convert from two's complement to sign-magnitude 
 *   where the MSB is the sign bit
 *   You can assume that x > TMin
 *   Example: twosComp2SignMag(-5) = 0x80000005.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 4
 */

int twosComp2SignMag(int x) {
  int signMask = x >> 31;
  x =  (~signMask & x) | (signMask & (~x + 1) | ((signMask & 1) << 31));
  return x;
}

//10
/*
 * isPower2 - returns 1 if x is a power of 2, and 0 otherwise
 *   Examples: isPower2(5) = 0, isPower2(8) = 1, isPower2(0) = 0
 *   Note that no negative number is a power of 2.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 4
 */
int isPower2(int x) {
  // IOW, the problem is if this equation has only 1 1
  // it's false for 1 and INT_MIN
  int LSB = x & (~x + 1); // isolate LSB
  int ans = x ^ LSB; // if x == LSB, x = 0
  ans = !ans; //if x == LSB, x = 1
  ans = !(LSB & 1) & ans; // if LSB is at 1, ans is 0
  ans = !(x & (1 << 31)) & ans; // if x is INT_MIN, ans is 0
  //ans = !!(x) & ans; // if x is 0, ans is 0
  return ans;
}

int main(){
  for (int i = 0; i < 20; i++)
  {
    /* code */
    if (isPower2(i))
      printf("%d\n",i);
  }
  
}