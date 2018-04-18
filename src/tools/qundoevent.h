#ifndef QUNDOEVENT_H
#define QUNDOEVENT_H

#include <QUndoCommand>
#include "../liblcf/src/generated/rpg_event.h"
#include "qgraphicsmapscene.h"

class QUndoEvent : public QUndoCommand
{
public:
    explicit QUndoEvent(RPG::Event data,
                        QGraphicsMapScene *scene,
                        QUndoCommand *parent = 0);
    void undo();

private:
    RPG::Event m_data;
    QGraphicsMapScene* m_scene;
};

#endif // QUNDOEVENT_H
