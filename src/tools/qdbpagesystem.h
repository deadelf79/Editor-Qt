#ifndef QDBPAGESYSTEM_H
#define QDBPAGESYSTEM_H

#include <QWidget>
#include "../liblcf/src/data.h"

namespace Ui {
class QDbPageSystem;
}

class QDbPageSystem : public QWidget
{
    Q_OBJECT

public:
    explicit QDbPageSystem(RPG::Database &database, QWidget *parent = 0);
    ~QDbPageSystem();

private:
    Ui::QDbPageSystem *ui;
    RPG::Database &m_data;
};

#endif // QDBPAGESYSTEM_H
