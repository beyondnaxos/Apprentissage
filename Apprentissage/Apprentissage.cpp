#include <iostream>

using namespace std;

class Book {

public:
	string Author;
	string Title;
	int Year;
	bool Disponible;

	void myBookIs() {
		cout << "My book is " << Title << " by " << Author << " published in " << Year << endl;
	};

	Book(string author, string title, int year, bool disponible) {
		Author = author;
		Title = title;
		Year = year;
		Disponible = disponible;
	};

};

int main() {

	
	Book harry = Book("Jk Rowling", "Fary Potter", 2023, true);
	Book indiana = Book("Jean Pierr", "Indiana Jones", 1986, false);
	Book mock = Book("Harper Lee", "To Kill a Mockingbird", 1960, true);
	Book gatsby = Book("F. Scott Fitzgerald", "The Great Gatsby", 1925, true);
	Book rye = Book("J.D. Salinger", "The Catcher in the Rye", 1951, false);
	Book orwell = Book("George Orwell", "1984", 1949, true);
	Book men = Book("John Steinbeck", "Of Mice and Men", 1937, true);
	
	

		
	
	harry.myBookIs();
	indiana.myBookIs();
	mock.myBookIs();
	gatsby.myBookIs();
	rye.myBookIs();
	orwell.myBookIs();
	men.myBookIs();
	

	return 0;
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
