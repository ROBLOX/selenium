// Copyright 2013 Software Freedom Conservancy
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WEBDRIVER_IE_STRINGUTILITIES_H
#define WEBDRIVER_IE_STRINGUTILITIES_H

#include <string>

#define BASE_TEN_BASE 10
#define MAX_DIGITS_OF_NUMBER 22

namespace webdriver {

class StringUtilities {
 private:
  StringUtilities(void);
  ~StringUtilities(void);
 public:
  static std::wstring ToWString(const std::string& input);
  static std::string ToString(const std::wstring& input);
  static std::string ToString(long input);
  static std::wstring ToWString(long input);
  static std::string Format(const char* format, ...);
};

} // namespace webdriver

#endif  // WEBDRIVER_IE_STRINGUTILITIES_H