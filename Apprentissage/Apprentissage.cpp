#include <iostream>

using namespace std;

class Employee {
private:
	string Name;
	string Company;
	int Age;
	bool Stupid;
	
	
public:
	
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}

	void setAge(int age) {
		if(age > 15)
		Age = age;
	}
	int getAge() {
		return Age;
	}

	void setStupid(bool stupid) {
		Stupid = stupid;
	}
	bool getStupid() {
		return Stupid;
	}
	
	void myEmployeeIs() {
		cout << "i'm " << Name << ", I work at " << Company << " and i'm " << Age << " Years Old" <<endl;
	};

	Employee(string name, string company, int age, bool stupid) {
		Name = name;
		Company = company;
		Age = age;	
		Stupid = stupid;
	};

};

int main() {

	Employee employee1 = Employee("Robert Patou", "Google", 19, true);
	Employee employee2 = Employee("Edward Joumla", "Free", 37, false);
	Employee employee3 = Employee("Frule Berloule", "AOL", 51, true);
	employee3.setName("Jimmy Mickael");
	
	cout << employee1.getName() << " is an employee aged of " << employee1.getAge() << endl;
	cout << employee2.getName() << " don't like " << employee2.getAge() << endl;
		
	employee1.myEmployeeIs();
	employee2.myEmployeeIs();
	employee3.myEmployeeIs();
	
	

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
