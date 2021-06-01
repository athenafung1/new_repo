#include <iostream>

#include "backend/course.hpp"
#include "user_interface/command_line_interface.hpp"

using course::Course;
using user_interface::CommandLineInterface;

int main(int argc, char *argv[]) {
//  Course new_course = Course("CS 100");
  CommandLineInterface command_line_interface = CommandLineInterface();
  command_line_interface.ShowBasicPrompt();
  
  return 0;
}