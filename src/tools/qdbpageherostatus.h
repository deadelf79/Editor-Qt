#ifndef QDBPAGEHEROSTATUS_H
#define QDBPAGEHEROSTATUS_H

#include <QWidget>
#include "../liblcf/src/data.h"

namespace Ui {
class QDbPageHeroStatus;
}

class QDbPageHeroStatus : public QWidget
{
    Q_OBJECT

public:
    explicit QDbPageHeroStatus(RPG::Database &database, QWidget *parent = 0);
    ~QDbPageHeroStatus();

private:
    Ui::QDbPageHeroStatus *ui;
    RPG::Database &m_data;
};

#endif // QDBPAGEHEROSTATUS_H
