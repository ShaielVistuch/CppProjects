#pragma once
#include <stdexcept>

using std::runtime_error;

class RegOpenKeyExAError : public runtime_error {
public:
  RegOpenKeyExAError(const std::string& error)
      : runtime_error{error} {
  }
};
class CreateMutexError : public runtime_error {
public:
  CreateMutexError(const std::string& error) : runtime_error{error} {
  }
};
class RegQueryValueExAError : public runtime_error {
public:
  RegQueryValueExAError(const std::string& error) : runtime_error{error} {
  }
};
class RegSetValueExAError : public runtime_error {
public:
  RegSetValueExAError(const std::string& error) : runtime_error{error} {
  }
};