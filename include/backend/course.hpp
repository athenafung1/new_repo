#pragma once

#include <string>

namespace course {
class Course {
 public:
  Course(const std::string& course_name);
  const std::string& GetName() const;
 private:
  const std::string& course_name_;
};

} // namespace course