#--------------------------------------
# Héritage
#--------------------------------------

#--------------------------------------
#compilateur
#--------------------------------------

CC = g++

#--------------------------------------
# partie à compléter
#--------------------------------------

#nom du fichier du repertoire principal contenant la fonction main
MAIN_C++_SOURCES = main
#nom du répertoire contenant les autres fichiers source
DIR_SOURCES      = src
#nom des autres fichiers sources du repertoire DIR_SOURCES
OTHERS_C++_SOURCES   = Vehicule Utilitaire Camion VP CDate Location Parc Reservation ListeReservations
#répertoire contenant les .h
DIR_INCLUDE      = inc
#répertoire pour les .o
DIR_OBJETS       = bin
#répertoire pour l'exécutable
DIR_BIN          = bin
# nom exécutable (si essai alors TARGET = essai)
TARGET = locationMain

#--------------------------------------
#Options et répertoires
#--------------------------------------

#options de compilation
CFLAGS = -Wall -g -DDEBUG -c
#CFLAGS = -c -04

#bibliothèques nécessaires
# exemple LIBS = -lm
LIBS =

#Répertoires bibliothèques à consulter
# exemple LIBSDIR = -L./lib
LIBSDIR =

#Répertoires include à consulter
INCLDIR = -I$(DIR_INCLUDE) 


#--------------------------------------
# Ne pas modifier la suite
# dépendances:

SOURCEFILES = $(MAIN_C++_SOURCES:=.cc) \
	 $(patsubst %,$(DIR_SOURCES)/%,$(OTHERS_C++_SOURCES:=.cc))
OBJETFILES = $(DIR_OBJETS)/$(MAIN_C++_SOURCES:=.o)  \
	$(patsubst %, $(DIR_OBJETS)/%,$(OTHERS_C++_SOURCES:=.o))
OTHERSOBJETFILES = $(patsubst %, $(DIR_OBJETS)/%,$(OTHERS_C++_SOURCES:=.o))


$(DIR_BIN)/$(TARGET) : $(OBJETFILES)
	@echo "--- Creation executable :" $(DIR_BIN)/$(TARGET) " ---"
	@$(CC) $(LIBSDIR) -o $(DIR_BIN)/$(TARGET) $(OBJETFILES) $(LIBS)

#pour le main
$(DIR_OBJETS)/$(MAIN_C++_SOURCES:=.o): $(DIR_OBJETS)/%.o : %.cc
	@echo "--- " compilation $< " ---"
	@$(CC) $(CFLAGS) $(INCLDIR) $<  -o $@

#pour les autres fichiers du répertoire DIR_SOURCES
$(OTHERSOBJETFILES) : $(DIR_OBJETS)/%.o : $(DIR_SOURCES)/%.cc
	@echo "--- " compilation $< " ---"
	@$(CC) $(CFLAGS) $(INCLDIR) $<  -o $@

#----------------------------------------
# construction dependances
EXPRESSION ="-e s/^/$(DIR_OBJETS)\//"

depend:
	@echo "--- Construction dépendances ---"	
	@$(CC) -MM $(INCLDIR) $(SOURCEFILES) | \
		sed $(EXPRESSION)  >makefile.depend

#----------------------------------------
# utilitaires

clean	:
	@rm -f *~ $(DIR_SOURCES)/*~ $(DIR_OBJETS)/*.o $(DIR_SOURCES)/*.bak \
		$(DIR_INCLUDE)/*~ core $(DIR_BIN)/$(TARGET) makefile.depend
	@echo "--- clean OK  ---"	
	@make -s depend

#----------------------------------------
# partie Makedepend 
#

-include makefile.depend

#----------------------------------------
# Tests

vierge	:
	./bin/locationMain

donnees : 
	./bin/locationMain res/data.txt








