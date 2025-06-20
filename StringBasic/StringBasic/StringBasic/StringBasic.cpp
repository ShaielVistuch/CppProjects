#include "StringBasic.h"

StringBasic::StringBasic(const char charArray[]) {
  int sizeOfStr = 0;
  while (charArray[sizeOfStr] != NULL_TERMINATOR) {
    sizeOfStr++;
  }
  int i = 0;
  if (sizeOfStr == 0) {
    str = NULL;
  } else {
    // Adding 1 for null character
    str = new char[sizeOfStr + 1]{};
    if (str != NULL) {
      while (i < sizeOfStr) {
        str[i] = charArray[i];
        i++;
      }
      str[i] = NULL_TERMINATOR;
    }
  }
}

std::ostream& operator<<(std::ostream& out, const StringBasic& stringBasic) {
  int i = 0;
  while (stringBasic.str[i] != NULL_TERMINATOR) {
    out << stringBasic.str[i];
    i++;
  }
  return out;
}

StringBasic& StringBasic::operator=(const char charArray[]) {
  delete[] this->str;
  *this = StringBasic(charArray);
  return *this;
}

StringBasic& StringBasic::operator=(const StringBasic& stringBasic2) {
  if (&stringBasic2 == this) {
    return *this;
  }
  str = stringBasic2.str;
  return *this;
}

bool StringBasic::operator==(const StringBasic& stringBasic2) const {
  if (!(str == stringBasic2.str)) {
    return false;
  }
  return true;
}

bool StringBasic::areTwoCharArraysSame(const char str1[], const char str2[]) {
  int i = 0;
  while (str1[i] != NULL_TERMINATOR) {
    if (str1[i] != str2[i]) {
      return false;
    };
    i++;
  }
  int j = 0;
  while (str2[j] != NULL_TERMINATOR) {
    j++;
  }
  if (i == j) {

    return true;
  }
  return false;
}

bool operator==(const char* charArray, const StringBasic& stringBasic) {
  if (StringBasic::areTwoCharArraysSame(charArray, charArray)) {
    return true;
  }
  return false;
}

bool StringBasic::operator==(char charArray[]) const {
  if (StringBasic::areTwoCharArraysSame(charArray, charArray)) {
    return true;
  }
  return false;
}