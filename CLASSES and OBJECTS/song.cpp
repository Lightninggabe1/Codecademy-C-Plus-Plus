//1/7: Getting Classy with C++

//2/7: Class Members
#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {
  title = new_title;
}
std::string Song::get_title() {
  return title;
}

//3/7: Creating Objects
#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}
