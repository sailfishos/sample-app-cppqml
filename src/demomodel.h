#ifndef DEMOMODEL_H
#define DEMOMODEL_H

#include <QAbstractListModel>

class DemoModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit DemoModel(QObject *parent = 0);

    virtual int rowCount(const QModelIndex&) const { return backing.size(); }
    virtual QVariant data(const QModelIndex &index, int role) const;

    Q_INVOKABLE void activate(const QModelIndex&);

signals:

public slots:

private:
    QVector<QString> backing;
};

#endif // DEMOMODEL_H
