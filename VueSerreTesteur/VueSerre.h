/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g2
 *
 * Created on 19 décembre 2019, 14:59
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "../ClassesMetier/infoclimat.h"
#include "../ClassesMetier/Observateur.h"

class VueSerre : public QWidget, Observateur {
    Q_OBJECT
public:
    VueSerre();
    VueSerre(QString nom1, Infoclimat *uneInfoClimat);
    virtual ~VueSerre();
    void mettreAJour();
    
private:
    QString nom;
    Ui::VueSerre widget;
    Infoclimat *infosClimat;
};

#endif /* _VUESERRE_H */
