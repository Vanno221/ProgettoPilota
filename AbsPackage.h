#ifndef ABSPACKAGE_H
#define ABSPACKAGE_H
#include "absalgorithm.h"

class AbsPackage : public QObject {
    Q_OBJECT
private:
    int m_difficulty;

public:
    AbsPackage() = default;
    virtual void chooseDifficulty() = 0;
    virtual void startSorting() = 0;

};

#endif // ABSPACKAGE_H
