/*
 * File:   VuePrincipale.cpp
 * Author: Camilleri Boulanger
 * Created on 19 décembre 2019, 14:56
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
}

VuePrincipale::~VuePrincipale() {
}

VuePrincipale::mettreAJour() {
    VueMeteo*VueMeteo= new VuePrincipale();
    //VuePrincipale*VueSerre=new VuePrincipale();
}
