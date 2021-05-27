# Battle Plan

## Goal
A tool to optimize university course scheduling. Ideally this program:
  * works for multiple universities
  * differentiates between quarter vs semester systems

### User Interface
* CLI (start with this?)
* SOME C++ GUI LIBRARIES
  * [JUCE](https://docs.juce.com/master/modules.html)
  * [QT](https://doc.qt.io/qt-6/modules-cpp.html)
  * [wxWidgets](https://docs.wxwidgets.org/3.0/modules.html)

## THE PLAN

1. main class
2. class to handle reading/writing to file (maybe split into 2 classes)
   * parsing the course options?
3. class to figure out how do we store data in file
   * DATA STRUCTURES
4. class to read file and convert it to understandable classes
5. class that handles backend optimization logic
   * MORE DATA STRUCTURES
6. user interface class
    * takes in filepath input with classes
    * pretty display the output

\infty.

### IMPLEMENTATION IDEAS
* handle different universities by saving courses and their pre/postreqs with JSON structure([C++ version](https://github.com/nlohmann/json))
