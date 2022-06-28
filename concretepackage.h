#ifndef CONCRETEPACKAGE_H
#define CONCRETEPACKAGE_H
#include "AbsPackage.h"
#include "absalgorithm.h"

class ConcretePackage : public AbsPackage
{
private:
    int m_difficulty;
    int *array;

public:
    ConcretePackage();
    void chooseDifficulty(int m_difficulty) override;
    AbsAlgorithm setAlgorithm() override;

signals:
    void startSorting() override;
};

#endif // CONCRETEPACKAGE_H
