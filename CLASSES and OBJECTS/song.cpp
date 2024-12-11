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

//4/7: Access Control: Public and Private
#include "song.hpp"

// add Song method definitions here:
void Song::add_title(std::string new_title) {

  title = new_title;

}

std::string Song::get_title() {

  return title;

}

void Song::add_artist(std::string new_artist) {

  artist = new_artist;

}

std::string Song::get_artist() {

  return artist;

}
