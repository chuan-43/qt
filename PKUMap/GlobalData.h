#ifndef GLOBALDATA_H
#define GLOBALDATA_H

// GlobalData.h
#include <qstring.h>
#include <QObject>

class GlobalData : public QObject {
    Q_OBJECT
private:
    explicit GlobalData(QObject *parent = nullptr) : QObject(parent) {}

public:
    static GlobalData& instance() {
        static GlobalData instance;
        return instance;
    }

    QString currentUserId() const { return m_currentUserId; }
    void setCurrentUserId(QString id) { m_currentUserId = id; }

private:
    QString m_currentUserId;
};

#endif // GLOBALDATA_H
