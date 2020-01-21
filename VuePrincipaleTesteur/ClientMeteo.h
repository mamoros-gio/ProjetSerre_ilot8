/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.h
 * Author: snir2g2
 *
 * Created on 21 janvier 2020, 16:11
 */

#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H

class ClientMeteo {
public:
    ClientMeteo();
    ~ClientMeteo();
    void traiterBulletinMeteo(BulletinMeteo bulletin);
    void declancherAlarmeVent();
    void declancherFinAlarmeVent();
    void getBulletinMeteo();
private:

};

#endif /* CLIENTMETEO_H */


