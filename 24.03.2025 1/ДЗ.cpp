//1
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

    string getName() const { return name;}

    int getWeight() const { return weight; }
 
    void setAge(int animalAge) { age = animalAge; }

    int getAge() const { return age; }
};

int main() 
{
    Animal myAnimal("Lion", 200);
    myAnimal.print();

    myAnimal.setAge(5);
    cout << "Animal Age: " << myAnimal.getAge() << " years" << endl;
}



//2
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

class Cat : public Animal 
{
public:
    Cat(const string& catName, int catWeight)
        : Animal(catName, catWeight) {
    }

    void print() const 
    {
        cout << "Cat Name: " << this->getName() << ", Weight: " << this->getWeight() << " kg" << endl;
    }
};

class Dog : public Animal 
{
public:
    Dog(const string& dogName, int dogWeight)
        : Animal(dogName, dogWeight) {
    }

    void print() const 
    {
        cout << "Dog Name: " << this->getName() << ", Weight: " << this->getWeight() << " kg" << endl;
    }
};

int main() 
{
    Cat myCat("Whiskers", 5);
    Dog myDog("Buddy", 25);

    myCat.print();
    myDog.print();

    myCat.setAge(3);
    myDog.setAge(4);

    cout << "Cat Age: " << myCat.getAge() << " years" << endl;
    cout << "Dog Age: " << myDog.getAge() << " years" << endl;
}
