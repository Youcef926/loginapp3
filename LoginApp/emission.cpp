#include "emission.h"

emission::emission()
{
    name="";
    type="";
    sujet="";


}
void emission::setname(QString n){name=n;}
void emission::settype(QString n){type=n;}
void emission::setsujet(QString n){sujet=n;}


QString emission::get_name(){return name;}
QString emission::get_type(){return type;}
QString emission::get_sujet(){return sujet;}
