#include <iostream>

using namespace std;

class Book {
private:
	string Author;
	string Name;
	int Year;
	bool Disponible;
	
public:
	
	void getAuthor(string author) {
		Author = author;
	}
	string getAuthor() {
		return Author;
	}
	
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}

	void setYear(int year) {
		Year = year;
	}
	int getYear() {
		return Year;
	}
	
	void setDispo(bool disponible) {
		Disponible = disponible;
	}
	bool getDispo() {
		return Disponible;
	}
	

	void myBookIs() {
		cout << "My book is " << Name << " by " << Author << " published in " << Year << endl;
	};

	Book(string author, string name, int year, bool disponible) {
		Author = author;
		Name = name;
		Year = year;
		Disponible = disponible;
	};

};

int main() {

	
	Book harry = Book("Jk Rowling", "Fary Potter", 2023, true);
	Book indiana = Book("Jean Pierr", "Indiana Jones", 1986, false);
	harry.setName("harry Potter");

	
	harry.myBookIs();
	indiana.myBookIs();
	

	//return 0;kc
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
