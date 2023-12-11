#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaClassInfo>

#include "shoppingcart.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Instantiate the ShoppingCart
    ShoppingCart cart("John Doe", 100.0);

    // Output class information
    const QMetaObject *metaObject = cart.metaObject();
    qDebug() << "Class Information:" << metaObject->classInfo(0).value();

    // Set properties using setProperty
    cart.setProperty("personName", "Jane Doe");
    cart.setProperty("totalAmount", 150.0);

    // Display updated property values
    qDebug() << "Person Name:" << cart.getPersonName();
    qDebug() << "Creation Date:" << cart.getCreationDate().toString();
    qDebug() << "Total Amount:" << cart.getTotalAmount();

    return a.exec();
}
