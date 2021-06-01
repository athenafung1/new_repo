#include "user_interface/command_line_interface.hpp"
#include <string>
#include <sstream>

namespace user_interface {

using std::string;

CommandLineInterface::CommandLineInterface() {
  run_optimizer_ = false;
  is_user_done_ = false;
}

bool CommandLineInterface::ShowBasicPrompt() {
  std::cout << "Enter your university's full name: ";
  // TODO: stringstream or cin?
  string university_name;
  getline(std::cin, university_name);
  // TODO: use boolean return when support for reading in files is added
  std::cout << "Enter your courses or type q to quit." << std::endl;
  while (!is_user_done_) {
    RequestCoursePrompt();
  }
  return false;
}

std::string CommandLineInterface::RequestCoursePrompt() {
  std::cout << "Enter the course name: ";
  string course_title;
  getline(std::cin, course_title);
  if (course_title == "q" || course_title == "Q") {
    // TODO: trim whitespace
    is_user_done_ = true;
  } else {
    RequestPrereqPrompt();
  }
  
  // TODO: return value
  return std::string();
}

std::string CommandLineInterface::RequestPrereqPrompt() {
  std::cout << "Enter this course's prerequisites as a comma separated list (eg. ENG 100, BIO 200, CHEM 300, MATH 400): ";
  string course_prereqs;
  getline(std::cin, course_prereqs);
  
  // TODO: return value
  return std::string();
}

} // namespace user_interface