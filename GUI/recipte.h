#ifndef RECIPTE_H
#define RECIPTE_H
#include <string>
#include <vector>

class Recipte
{
private:
    int id;
    std::string name;
    int type_recipte;
    int type_in;
    std::string description;
    std::vector<std::string> product;
public:
    Recipte();
    int SetId();
    void GetId(int);
    std::string SetName();
    void GetName(std::string);
    int SetTypeRecipte ();
    void GetTypeRecipte(int);
    int SetTypeIn();
    void GetTypeIn(int);
    std::string SetDescription();
    void GetDescription(std::string);
    std::vector<std::string> SetProduct();
    void GetProduct(std::vector<std::string>);
};

#endif // RECIPTE_H
