#include "Greeting.hpp"

Greeting::Greeting() {}
Greeting::Greeting(Greeting const &greeting) {}

Greeting::~Greeting() {}

Greeting &Greeting::operator=(Greeting const &rhs) { return (*this); }

string const Greeting::greetingMessage = "Hi";

std::string Greeting::sayHi(void) const {
  return (this->greetingMessage);
}

ostream &operator<<(ostream &out, Greeting const &rhs) { return (out); }
