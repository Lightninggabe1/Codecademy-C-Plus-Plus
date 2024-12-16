//1/7: Getting Classy with C++
// Create the Song class below:
class Song {
  
};

//2/7: Class Members
#include <string>

// add the Song class here:
class Song {
  std::string title;
public:
  void add_title(std::string new_title);
  std::string get_title();
};

//3/7: Creating Objects
#include <string>

// add the Song class here:
class Song {
  
  std::string title;

public:
  void add_title(std::string new_title);
  std::string get_title();
  
};

//4/7: Access Control: Public and Private
#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  void add_title(std::string new_title);
  std::string get_title();
  void add_artist(std::string new_artist);
  std::string get_artist();
};

//6/7: Constructors
#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  Song(std::string new_title, std::string new_artist);
  
};
