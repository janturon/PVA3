struct Animal {
  const char* name;
  virtual const char* whatDoesItSay();
  // TODO
}

struct Dog : Animal {
  // TODO
}

struct Fox : Animal {
  // TODO
}

int main() {
  Animal* animals[] = {
    new Dog("dog", "woof"),
    new Fox("fox", "ringidingidingidingiding")
  }
  for(Animal* animal : animals) {
    animal->whatDoesItSay();
  }
  // dog says woof
  // fox says ringidingidingidingiding
}