#ifndef RECIPTE_H
#define RECIPTE_H
#include <QString>
#include <QVector>

class Recipte
{
private:
    int id;
    QString name;
    int type_recipte;
    int type_in;
    QString description;
    QVector<QString> product;
    QVector<QString> massa;
    QString image;
public:
    Recipte();
    int SetId();
    void GetId(int);
    QString SetName()const;
    void GetName(QString);
    int SetTypeRecipte ();
    void GetTypeRecipte(int);
    int SetTypeIn();
    void GetTypeIn(int);
    QString SetDescription();
    void GetDescription(QString);
    QVector<QString> SetProduct();
    void GetProduct(QVector<QString>);
    QVector<QString> SetMassa();
    void GetMassa(QVector<QString>);
    QString SetImage();
    void GetImage(QString);
};

#endif // RECIPTE_H
