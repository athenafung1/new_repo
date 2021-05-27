#include <iostream>

#include "backend/course.hpp"

using course::Course;

int main(int argc, char *argv[]) {
  std::cout << "hello world" << std::endl;
  Course new_course = Course("CS 100");
  std::cout << new_course.GetName() << std::endl;
  return 0;
}