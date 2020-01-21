/* 
 * File:   Superviseur.h
 * Author: snir2g2
 *
 * Created on 9 janvier 2020, 17:28
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H
#include "ClientMeteo.h"

class Superviseur {
public:
    Superviseur();
    ~Superviseur();
    ClientMeteo* getLeClientMeteo();
    void setVuePrincipale(VuePrincipale uneVuePrincipale);
private :
    ClientMeteo* leClientMeteo;
};

#endif /* SUPERVISEUR_H */

