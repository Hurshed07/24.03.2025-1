#include <iostream>
#include <string>

using namespace std;

class Animal 
{
private:
    string name;
    int weight;

protected:
    int age;

public:
    Animal(const string& animalName, int animalWeight)
    {
        this->name = animalName;
        this->weight = animalWeight;
        this->age = 0;
    }

    void print() const 
    {
        cout << "Animal Name: " << name << ", Weight: " << weight << " kg" << endl;
    }

    string getName() const 
    {
        return name;
    }

    int getWeight() const 
    {
        return weight;
    }

    void setAge(int animalAge) 
    {
        age = animalAge;
    }

    int getAge() const 
    {
        return age;
    }
};

int main() 
{
    Animal myAnimal("Lion", 200);
    myAnimal.print();

    myAnimal.setAge(5);
    cout << "Animal Age: " << myAnimal.getAge() << " years" << endl;
}