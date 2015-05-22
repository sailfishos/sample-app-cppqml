#include "demomodel.h"

DemoModel::DemoModel(QObject *parent) :
    QAbstractListModel(parent)
{
    backing << "cat" << "dog" << "unicorn" << "quokka" << "pitahui" << "beetle";
}

QVariant DemoModel::data(const QModelIndex &index, int role) const {
    if(!index.isValid()) {
        return QVariant();
    }
    if(role == Qt::DisplayRole) {
        return QVariant(backing[index.row()]);
    }
    return QVariant();
}

void DemoModel::activate(const QModelIndex &index) {
    if(!index.isValid()) {
        return;
    }
    int row = index.row();
    QString value = backing[row];

    beginRemoveRows(index, row, row);
    backing.erase(backing.begin() + row);
    endRemoveRows();

    beginInsertRows(index, 0, 0);
    backing.insert(0, value);
    endInsertRows();
}
