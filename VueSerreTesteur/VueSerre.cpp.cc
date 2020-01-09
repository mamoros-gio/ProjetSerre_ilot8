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
void VueSerre::mettreAJour(){
    widget.temperature->setText("22");
    widget.hygrometrie->setText("45");
    widget.luminosite->setText("120");
    widget.positionOuvrants->setText("Ouvert");
}
