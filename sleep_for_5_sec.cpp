#include <iostream>
#include <thread>

using namespace std;

int main() {
  cout << "Hello, world!" << endl;
  this_thread::sleep_for(chrono::seconds(5));
  cout << "Slept for 5 seconds" << endl;
  return 0;
}
