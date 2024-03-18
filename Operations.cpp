#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}
int multplication(int a, int b)
{
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}
float division(float a, float b)
{
	float resultat;
	
	resultat = a / b;
	
	return resultat;
}


int factoriel(int nb)
{
	int i;
	int valeur=1;
	for(i=1;i<=nb;i++)
	{
		valeur=i*valeur;
	}
	return valeur;
}

int exposant(int nb, int exp)
{
	int resultat;
	
	resultat = pow(nb,exp);
	
	return resultat;
}

