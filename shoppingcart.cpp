#include "shoppingcart.h"

ShoppingCart::ShoppingCart(const QString& personName, double totalAmount, QObject *parent)
    : QObject(parent), personName_(personName), totalAmount_(totalAmount)
{
    creationDate_ = QDate::currentDate();
}

QString ShoppingCart::getPersonName() const
{
    return personName_;
}

QDate ShoppingCart::getCreationDate() const
{
    return creationDate_;
}

double ShoppingCart::getTotalAmount() const
{
    return totalAmount_;
}

void ShoppingCart::setPersonName(const QString& personName)
{
    personName_ = personName;
}

void ShoppingCart::setTotalAmount(double totalAmount)
{
    totalAmount_ = totalAmount;
}
