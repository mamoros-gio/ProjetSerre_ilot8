/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 15:04
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"
#include "../ClassesMetier/Observateur.h"
#include "../ClassesMetier/BulletinMeteo.h"

class VueMeteo : public QWidget, Observateur {
    Q_OBJECT
public:
    VueMeteo(BulletinMeteo *unBulletinMeteo);
    virtual ~VueMeteo();
    void mettreAJour();
private:
    Ui::VueMeteo widget;
    VueMeteo* vueMaitheo;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* _VUEMETEO_H */
