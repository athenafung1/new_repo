#pragma once
#include <iostream>

namespace user_interface {
class CommandLineInterface {
 public:
  // TODO: support reading in files and saved data
  CommandLineInterface();
  bool ShowBasicPrompt();
 private:
  std::string RequestCoursePrompt();
  std::string RequestPrereqPrompt();
  
  bool run_optimizer_;
  bool is_user_done_;
};

} // namespace user_interface