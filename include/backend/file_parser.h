#pragma once

#include <ostream>

namespace file_parser {

class FileParser {
 public:
  FileParser();
 private:
  friend std::ostream &operator<<(std::ostream &os, const FileParser &file_parser);
};

} // namespace file_parser