#ifndef QDBPAGEPROFESSIONS_H
#define QDBPAGEPROFESSIONS_H

#include <QWidget>
#include "../liblcf/src/generated/rpg_database.h"
#include "../liblcf/src/generated/rpg_class.h"
#include "qgraphicsbattleanimationitem.h"

namespace Ui {
class QDbPageClasses;
}

class QDbPageClasses : public QWidget
{
    Q_OBJECT

public:
    explicit QDbPageClasses(RPG::Database &database, QWidget *parent = 0);
    ~QDbPageClasses();

    void UpdateModels();

public slots:
    void on_currentClassChanged(RPG::Class *_class);

signals:
    void currentClassChanged(RPG::Class *_class);

private:
    Ui::QDbPageClasses *ui;

    QGraphicsBattleAnimationItem *m_battlerItem;

    RPG::Class *m_currentClass;
    RPG::Database &m_data;
};

#endif // QDBPAGEPROFESSIONS_H
