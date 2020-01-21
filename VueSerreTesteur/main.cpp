/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 14:54
 */

#include <QApplication>
#include "VueSerre.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    Infoclimat* infos= new Infoclimat();
    VueSerre* serre= new VueSerre("serre1", infos);
    infos->setTemperature(18);
    infos->setHygrometrie(54);
    infos->setPositionOuvrants(75);
    infos->setLuminosite(240);
    infos->setDate(210120);
    serre->show();
    
    return app.exec();
}
