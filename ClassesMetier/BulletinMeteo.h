/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g2
 *
 * Created on 9 janvier 2020, 16:14
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"
#include "Observateur.h"

class BulletinMeteo : public Observable {
public:
    BulletinMeteo();
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    int setVitesseVent(int vitesse);
    int setTemperature(int temperature);
    void setAlerteVent(bool alerte);
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

