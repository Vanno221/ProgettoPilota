#ifndef ABSALGORITHM_H
#define ABSALGORITHM_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QThread>
#include <iostream>

class AbsAlgorithm : public QObject
{
    Q_OBJECT
private:
    int m_difficulty{};

public:
    AbsAlgorithm() = default;

    virtual int getDifficulty() = 0;

    virtual void setDifficulty(int m_difficulty) = 0;

    virtual void runSorting(int arr[]) = 0;

    virtual ~AbsAlgorithm() = default;



};
#endif // ABSALGORITHM_H
