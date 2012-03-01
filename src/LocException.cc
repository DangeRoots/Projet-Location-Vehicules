using namespace std;

#include <LocException.h>

LocException::LocException (int numero=0, string const& phrase="", int niveau=0) 
	throw():m_numero(numero),m_phrase(phrase),m_niveau(niveau){}
		
const char* LocException::what() const throw(){
	return m_phrase.c_str();
}

int LocException::getNiveau() const throw(){
	return m_niveau;
}
		
LocException::~LocException() throw(){}

//~ LocException LocException::OpenFail (int numero, string const& phrase, int niveau) throw(){
			//~ m_numero = 1;
			//~ m_phrase = "Ouverture du fichier impossible";
			//~ m_niveau = 1;
			//~ return ;
//~ }
