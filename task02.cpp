/*
format: N records of 6 bytes:
  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)
  byte 3-6: height (float LSB)

separator 0xFF (after N records)
name1|name2|...|nameN|

-----
Na základě těchto údajů o formátu zjistětě z přiloženého souboru task02.dat
kdy se narodil John Doe a kdy Sam Sepiol
*/


#include <cstdio>

int main() {
  // TODO
}