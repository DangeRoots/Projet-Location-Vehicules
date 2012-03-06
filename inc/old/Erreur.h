#ifndef ERREUR_H
#define ERREUR_H

class erreur {
public:
    int cause;
    erreur(int c) : cause(c) {}
    erreur(const erreur &source) : cause(source.cause) {}
};

#endif
