#include <iostream>
using namespace std;

class Employee {
public:
  string id, name;
  int experience;

  Employee(string id, string name, int experience) {
    this->id = id;
    this->name = name;
    this->experience = experience;
  }

  void work();
};

void Employee::work() {
  cout << "Experience is " << this->experience << " years." << endl;
}
int main() {
  Employee emp1("22MCA014", "Arbab", 4);
  emp1.work();

  Employee *emp2 = new Employee("22MCA024", "ACd", 5);
  emp2->work();

  return 0;
}
