#ifndef QDBPAGETERRAIN_H
#define QDBPAGETERRAIN_H

#include <QWidget>
#include "../liblcf/src/data.h"

namespace Ui {
class QDbPageTerrain;
}

class QDbPageTerrain : public QWidget
{
    Q_OBJECT

public:
    explicit QDbPageTerrain(RPG::Database &database, QWidget *parent = 0);
    ~QDbPageTerrain();

private:
    Ui::QDbPageTerrain *ui;
    RPG::Database &m_data;
};

#endif // QDBPAGETERRAIN_H
