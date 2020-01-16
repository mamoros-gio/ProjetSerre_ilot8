/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vueSerre.h
 * Author: snir2g2
 *
 * Created on 16 janvier 2020, 14:24
 */

#ifndef VUESERRE_H
#define VUESERRE_H

class vueSerre {
public:
    vueSerre(QString nom, InfosClimat uneInfoClimat);
    ~vueSerre();
    void mettreAJour();
private:
    QString nom;

};

#endif /* VUESERRE_H */

