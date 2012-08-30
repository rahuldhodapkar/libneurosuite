

#ifndef QCOLORBUTTON_H
#define QCOLORBUTTON_H

#include "libklustersshared_export.h"
#include <QPushButton>

class QColorButtonPrivate;

class KLUSTERSSHARED_EXPORT QColorButton : public QPushButton
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)

public:
    explicit QColorButton(QWidget * parent);
    ~QColorButton();

    void setColor(const QColor&);
    QColor color() const;
private Q_SLOTS:
    void slotSelectColor();
private:
    void updateBackgroundColor();
    QColorButtonPrivate *d;
};

#endif // QCOLORBUTTON_H
