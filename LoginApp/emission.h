#ifndef EMISSION_H
#define EMISSION_H
#include <QString>

class emission
{
public:
    void setname(QString n);
    void settype(QString n);
    void setsujet(QString n);

    QString get_name();
    QString get_type();
    QString get_sujet();
    emission();
private:
    QString type, name, sujet;
};

#endif // EMISSION_H
