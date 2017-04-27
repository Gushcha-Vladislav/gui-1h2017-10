#include "recipte.h"

Recipte::Recipte()
{

}
int Recipte::SetId(){
    return id;
}

void Recipte::GetId(int Id){
    id=Id;
}

QString Recipte::SetName()const{
    return name;
}

void Recipte::GetName(QString Name){
    name=Name;
}

int Recipte::SetTypeRecipte (){
    return type_recipte;
}

void Recipte::GetTypeRecipte(int Type_Reipte){
    type_recipte=Type_Reipte;
}

int Recipte::SetTypeIn(){
    return type_in;
}

void Recipte::GetTypeIn(int Type_In){
    type_in=Type_In;
}

QString Recipte::SetDescription(){
    return description;
}

void Recipte::GetDescription(QString Description){
    description=Description;
}

QVector<QString> Recipte::SetProduct(){
    return product;
}

void Recipte::GetProduct(QVector<QString> Product){
    product=Product;
}
QString  Recipte::SetImage(){
    return image;
}

void  Recipte::GetImage(QString Image){
    image=Image;
}
QVector<QString> Recipte::SetMassa(){
    return massa;
}

void Recipte::GetMassa(QVector<QString> Massa){
    massa=Massa;
}

