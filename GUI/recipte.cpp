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

std::string Recipte::SetName(){
    return name;
}

void Recipte::GetName(std::string Name){
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

std::string Recipte::SetDescription(){
    return description;
}

void Recipte::GetDescription(std::string Description){
    description=Description;
}

std::vector<std::string> Recipte::SetProduct(){
    return product;
}

void Recipte::GetProduct(std::vector<std::string> Product){
    product=Product;
}
