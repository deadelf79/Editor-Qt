#ifndef QDBPAGESYSTEM2_H
#define QDBPAGESYSTEM2_H

#include <QWidget>
#include "../liblcf/src/data.h"

namespace Ui {
class QDbPageSystem2;
}

class QDbPageSystem2 : public QWidget
{
    Q_OBJECT

public:
    explicit QDbPageSystem2(RPG::Database &database, QWidget *parent = 0);
    ~QDbPageSystem2();

private:
    Ui::QDbPageSystem2 *ui;
    RPG::Database &m_data;
};

#endif // QDBPAGESYSTEM2_H
