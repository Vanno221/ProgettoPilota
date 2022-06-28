#ifndef ABSPACKAGE_H
#define ABSPACKAGE_H
#include "absalgorithm.h"

class AbsPackage : public QObject {
    Q_OBJECT
private:
    int m_difficulty;

public:
    AbsPackage() = default;
    QList<QThread*> *workers;
    virtual void chooseDifficulty(int m_difficulty) = 0;
    virtual AbsAlgorithm setAlgorithm() = 0;

signals:
    virtual void startSorting() = 0;

};

#endif // ABSPACKAGE_H
