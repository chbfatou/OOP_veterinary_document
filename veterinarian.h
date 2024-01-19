#include <iostream>
#include <string>
#include <vector>

// Forward declarations
class Pet;
class Owner;
class VetDocument;


class Owner {
private:
    std::string name;
    std::string phoneNumber;
    std::string postalAddress;

public:
    // Constructor
    Owner(const std::string& n, const std::string& phone, const std::string& address)
	: name(n), phoneNumber(phone), postalAddress(address) {}

    // Getter methods
    std::string getName() const { 
	return name; }
    std::string getPhoneNumber() const { 
	return phoneNumber; }
    std::string getPostalAddress() const { 
	return postalAddress; }

    // Function to display owner details
    void display() const {
        std::cout << "Owner Name: " << name << "\nPhone: " << phoneNumber << "\nAddress: " << postalAddress << std::endl;
    }
};

class Pet {
private:
    std::string name;
    std::string dateOfBirth;
    char sex;
    std::string breed;
    Owner* owner; // Using a pointer to Owner since one owner can have multiple pets.

public:
    // Constructor
    Pet(const std::string& n, const std::string& dob, char s, const std::string& b, Owner* o)
        : name(n), dateOfBirth(dob), sex(s), breed(b), owner(o) {}

    // Getter methods
    std::string getName() const { 
	return name; }
    std::string getDateOfBirth() const {
	 return dateOfBirth; }
    char getSex() const { 
	return sex; }
    std::string getBreed() const {
	 return breed; }

    // Function to display pet details
    void display() const {
        std::cout << "Pet Name: " << name << "\nDOB: " << dateOfBirth << "\nSex: " << sex << "\nBreed: " << breed << std::endl;
        owner->display(); // Displaying owner details using pointer
    }
};

class VetDocument {
private:
    std::vector<Pet*> pets; // Using a vector of pointers to store pets

public:
    // Function to add a pet to the document
    void addPet(Pet* pet) {
        pets.push_back(pet);
    }

    // Function to display all pets in the document
    void displayAllPets() const {
        for (const auto& pet : pets) {
            pet->display();
            std::cout << "------------------------\n";
        }
    }
};

