#include <iostream>

using namespace std;

void initialize(char* arr[]){
  court << "arr came";
}

int main(int argc, char* argv[]) {
  int num = argc - 1;
  char array[10];
  initialize(array);
  void *pos = memchr(array, '@', 42);

  if (num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
  }
  if (argv != 0) {
    cout << "argv not null\n";; // intentional extra-semicolon
  }
  if (argv == nullptr) {
    return **argv; // intentional nullptr dereference
  }

  return 0;
}

