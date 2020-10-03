#ifndef MSGPROCESS_H
#define MSGPROCESS_H

#endif // MSGPROCESS_H

#include <QtNetwork>

QString getKeyValue(const QByteArray &message, QString s);
QString cmdRespToJson(int code,QString message);
