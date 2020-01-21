/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 14:56
 */

#include <QApplication>

#include "VueMeteo.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    /*VueMeteo *meteo = new VueMeteo();*/
    
    
    BulletinMeteo *lletinMeteo = new BulletinMeteo();
    VueMeteo *ueMeteo = new VueMeteo(lletinMeteo);
    ueMeteo->show();
    
    lletinMeteo->setVitesseVent(84);
    lletinMeteo->setTemperature(37);
    
    //ueMeteo->mettreAJour();
    
    
    //lletinMeteo->setVitesseVent(55);
    //lletinMeteo->setTemperature(75);
    
    //instancier un bulletin
    //instancier une vueMeteo qui prend en compte le bulletin
    //setter la vitesse du vent et la temperature

    return app.exec();
}
