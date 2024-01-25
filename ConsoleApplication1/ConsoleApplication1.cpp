

#include <iostream>
#include <string>

class avion {
public:
    avion(std::string type, std::string numero_s) : type(type), numero_s(numero_s) {}

    void afficherInfos(){
        std::cout << type << " " << numero_s << std::endl;
    }
private:
    std::string type;
    std::string numero_s;
};
class Voiture {
public:
    // Constructeur
    Voiture(std::string marque, std::string modele) : marque(marque), modele(modele) {}

    // Méthode
    void afficherInfos() {
        std::cout << marque << " " << modele << std::endl;
    }

private:
    // Attributs
    std::string marque;
    std::string modele;
};

int main() {
    // Création d'objets
    Voiture voiture1("Toyota", "Camry");
    Voiture voiture2("Honda", "Accord");
    avion avion1("supersonic","151548455");
    avion avion2("subsonic","458458847");

    // Appel de méthodes
    voiture1.afficherInfos();  // Affiche "Toyota Camry"
    voiture2.afficherInfos();  // Affiche "Honda Accord"
    avion1.afficherInfos();
    avion2.afficherInfos();
    return 0;
}