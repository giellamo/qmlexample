#ifndef SORTBACKEND_H
#define SORTBACKEND_H

#include <QObject>
#include <QString>

class SortBackend : public QObject
{
  Q_OBJECT

public:
  explicit SortBackend(QObject *parent = nullptr);

  Q_INVOKABLE QVector<int> sort_numbers(const QString &row);
};

#endif// SORTBACKEND_H
