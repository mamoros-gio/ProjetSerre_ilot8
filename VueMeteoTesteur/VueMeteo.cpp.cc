/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 15:04
 */

#include "VueMeteo.h"

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAJour() {
    widget.vitesseVent->setText("fort");
    widget.temperature->setText("chaud");
}
