/*

    Zelda Oni Link Begins

    Copyright (C) 2006-2008  Vincent Jouillat

    Please send bugreports with examples or suggestions to www.zeldaroth.fr

*/

#ifndef __LISTABLE_H__
#define __LISTABLE_H__

class Listable {
    public :
        Listable();
        //~Listable();
		//Shin-NiL (hmn) memory leak correction
        virtual ~Listable();
        int size();
        void ajout(Listable* l); // ajout d'un �l�ment seul
        void enleve(Listable* l); //enl�ve et lib�re l'�l�ment
        void setSuivant(Listable* l);
        bool operator==(const Listable* l); // compare les id
        int getListId();
    protected :
        Listable* suivant;
    private :
        int id;             // identifiant de l'objet, toujours > au pr�c�dent
};

#endif  // Listable.h
