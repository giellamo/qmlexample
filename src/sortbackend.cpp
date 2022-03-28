#include "sortbackend.h"
#include <algorithm>
#include <QDebug>

SortBackend::SortBackend(QObject *parent) : QObject(parent)
{
}

Q_INVOKABLE QVector<int> SortBackend::sort_numbers(const QString &row)
{
  QVector<int> result;

  for (QString token : row.split(',')) {
    bool ok{ false };
    int converted = token.toInt(&ok);
    if (ok) {
      result.push_back(converted);
    }
  }

  std::sort(result.begin(), result.end());
  
  return result;
}