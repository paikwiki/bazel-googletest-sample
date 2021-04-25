#ifndef GREETING_H
#define GREETING_H

#include <iostream>

using namespace std;

class Greeting {
 private:
  static string const greetingMessage;

 public:
  Greeting();
  Greeting(Greeting const &greeting);

  ~Greeting();

  Greeting &operator=(Greeting const &rhs);

  std::string sayHi(void) const;
};

ostream &operator<<(ostream &out, Greeting const &rhs);

#endif
