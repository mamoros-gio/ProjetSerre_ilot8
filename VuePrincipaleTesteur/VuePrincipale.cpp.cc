/*
 * File:   VuePrincipale.cpp
 * Author: Camilleri Boulanger
 * Created on 19 décembre 2019, 14:56
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    laVueMeteo = new VueMeteo();
    widget.meteo;
}

VuePrincipale::~VuePrincipale() {
}

VuePrincipale::mettreAJour() {
    //VuePrincipale*VueSerre=new VuePrincipale();
}
