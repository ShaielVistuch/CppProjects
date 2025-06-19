#pragma once

#include <iostream>

using std::ostream;

const char NULL_TERMINATOR = '\0';

class StringBasic final {
private:
  char* str;

public:
  StringBasic(const char charArrayPtr[]);
  /*
   * @brief:	operator = overloading to allow assignment of char[] to a
   * BasicString object
   * @param charArray to assign
   * @return BasicString with new value
   */
  StringBasic& operator=(const char charArray[]);

  /*
   * @brief:	operator = overloading to allow assignment of a BasicString to a
   * BasicString object
   * @param BasicString to assign
   * @return BasicString with new value
   */
  StringBasic& operator=(const StringBasic&);

  /*
   * @brief:	operator = overloading to allow comparing of a BasicString to a
   * BasicString object
   * @param BasicString to compare to
   * @return True if all fields are the same
   */
  bool operator==(const StringBasic& stringBasic2) const;

  /*
   * @brief:	operator = overloading to allow comparing of a BasicString to a
   * char aray
   * @param char[] to compare to
   * @return True if StringBasic.str is same as @param
   */
  bool operator==(char[]) const;

  /*
   * @brief:	operator << overloading to allow an easy print of BasicString
   * object
   * @param ostream to print to
   * @param BasicString object to print
   * @return ostream operator with printing format of the complex object
   */
  friend ostream& operator<<(ostream& out, const StringBasic& stringBasic);
};