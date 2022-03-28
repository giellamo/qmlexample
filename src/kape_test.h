#include <QtTest/QtTest>
#include "sortbackend.h"

class kape_test : public QObject
{
  Q_OBJECT

private slots:
  void kape_tests()
  {
    SortBackend bc;
    QCOMPARE(bc.sort_numbers("1,2,3"), QVector<int>({ 1, 2, 3 }));
    QCOMPARE(bc.sort_numbers(" 3, 5, 1, 9 "), QVector<int>({ 1, 3, 5, 9 }));
    QCOMPARE(bc.sort_numbers(" 3, dog, 1, 9 "), QVector<int>({ 1, 3, 9 }));
    QCOMPARE(bc.sort_numbers("12, 3, 55, 2"), QVector<int>({ 2, 3, 12, 55 }));
  }
};
