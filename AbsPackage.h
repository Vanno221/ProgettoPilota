#ifndef ABSPACKAGE_H
#define ABSPACKAGE_H
#include "absalgorithm.h"
#include <QThread>

class AbsPackage : public QObject {
    Q_OBJECT
private:
    int m_difficulty;

public:
    AbsPackage() = default;
    virtual void chooseDifficulty(int m_difficulty, int* array) = 0;
    virtual void startSorting() = 0;
    QThread* thread = new QThread();

};

#endif // ABSPACKAGE_H
