#pragma once


class CPoint {

	//Encapsulation:
		//Public : Toutes les instances de la classe exterieur à la classe externe interne peuvent accéder aux éléments publique
		//Private : Seul la classe (ou méthodes de la classe) auront accès aux données privée 
		//Protected : Accessibe par la classe, les methodes de la classe et les enfants des méthodes de la classe

private : //
	//Document membres
	int n_x;
	int n_y;

public :
	//Fonctions membres
	//void afficheLog()const;

	//Accesseurs
	int getX()const;
	int getY()const;

	//Mutateurs
	void setX(int n_x);
	void setY(int n_y);
	


};