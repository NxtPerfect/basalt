#include "basalt.h"
#include <stdio.h>

void testCapitzalieFirstLetter() {
  char[] testStr = "capitalize me";
  char[] newStr = basalt.capitalizeFirstLetter(testStr);
  if (newStr == "Capitzalie me") {
    printf("Test passed Capitalize First Letter");
    return;
  }
  printf("Test failed Capitalize First Letter, got %s", newStr);
}

int main() {
  printf("Running tests...");
  testCapitzalieFirstLetter();
  printf("Tests finished");
}
