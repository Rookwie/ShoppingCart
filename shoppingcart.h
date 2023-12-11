#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QObject>
#include <QString>
#include <QDate>

class ShoppingCart : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString personName READ getPersonName WRITE setPersonName)
    Q_PROPERTY(QDate creationDate READ getCreationDate)
    Q_PROPERTY(double totalAmount READ getTotalAmount WRITE setTotalAmount)

public:
    explicit ShoppingCart(const QString& personName, double totalAmount, QObject *parent = nullptr);

    QString getPersonName() const;
    QDate getCreationDate() const;
    double getTotalAmount() const;

    void setPersonName(const QString& personName);
    void setTotalAmount(double totalAmount);

private:
    QString personName_;
    QDate creationDate_;
    double totalAmount_;
};

#endif // SHOPPINGCART_H
