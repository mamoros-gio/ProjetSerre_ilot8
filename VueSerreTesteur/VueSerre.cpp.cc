/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 14:59
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}
VueSerre::~VueSerre() {
    
}

VueSerre::VueSerre(QString nom1, Infoclimat *uneInfoClimat){
    widget.setupUi(this);
    this->nom=nom1;
    this->infosClimat=uneInfoClimat;
    this->infosClimat->addObservateur(this);
}

void VueSerre::mettreAJour(){
    widget.temperature->setText(QString::number(infosClimat->getTemperature()));
    widget.hygrometrie->setText(QString::number(infosClimat->getHygrometrie()));
    widget.luminosite->setText(QString::number(infosClimat->getLuminosite()));
    widget.positionOuvrants->setText(QString::number(infosClimat->getPositionOuvrants()));
}