//1/7: Getting Classy with C++
#include <iostream>
#include "song.hpp"

int main() {

}

//2/7: Class Members
#include <iostream>
#include "song.hpp"

int main() {

}

//3/7: Creating Objects
#include <iostream>
#include "song.hpp"

int main() {
  Song electric_relaxation;
  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title();
}

//4/7: Access Control: Public and Private
#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;
  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist();
}
