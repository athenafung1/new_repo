#include <backend/course.hpp>
#include <iostream>

namespace course {

using std::string;

course::Course::Course(const string& course_name) : course_name_(course_name) {
  std::cout << "I AM A CONSTRUCTOR" << std::endl;
}

const std::string &Course::GetName() const {
  return course_name_;
}
} // namespace course