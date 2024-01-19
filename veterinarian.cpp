#include <iostream>
#include "veterinarian.h"


int main() {
    // Create an owner
    Owner owner("Johnny Baton", "+33782477047", "123 Main St, City");
    Owner owner2("Carol bizar", "+33682569789","156 Maint St, City");

    // Create pets and associate them with the owner
    Pet cat("Whiskers", "01-01-2020", 'F', "Siamese", &owner);
    Pet dog("Buddy", "05-05-2018", 'M', "Labrador", &owner);
    Pet bird("Jack", "17-07-2019",'M', "Colibri",&owner2);


    // Create a vet document and add pets to it
    VetDocument vetDoc;
    vetDoc.addPet(&cat);
    vetDoc.addPet(&dog);
    vetDoc.addPet(&bird);

    // Display all pets in the vet document
    vetDoc.displayAllPets();

    return 0;
}

