#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
    ~Animal() {};
};

class Dog : public Animal
{
public:
    Dog(string m_word) : m_word(m_word) {};
    void makeSound()
    {
        cout << m_word << endl;
    }

private:
    string m_word;
};

class Cat : public Animal
{
public:
    Cat(string m_word) : m_word(m_word) {};
    void makeSound()
    {
        cout << m_word << endl;
    }

private:
    string m_word;
};

class Cow : public Animal
{
public:
    Cow(string m_word) : m_word(m_word) {};
    void makeSound()
    {
        cout << m_word << endl;
    }

private:
    string m_word;
};

int main()
{
    Animal* animals[3];

    animals[0] = new Dog("woof");
    animals[1] = new Cat("meow");
    animals[2] = new Cow("Mmmmmm");

    for (int i = 0; i < sizeof(animals)/sizeof(Animal); i++)
    {
        animals[i]->makeSound();
    }
    
    return 0;
}