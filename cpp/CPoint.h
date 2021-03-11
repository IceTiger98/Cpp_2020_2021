#pragma once


class CPoint {

	//Encapsulation:
		//Public : Toutes les instances de la classe exterieur � la classe externe interne peuvent acc�der aux �l�ments publique
		//Private : Seul la classe (ou m�thodes de la classe) auront acc�s aux donn�es priv�e 
		//Protected : Accessibe par la classe, les methodes de la classe et les enfants des m�thodes de la classe

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