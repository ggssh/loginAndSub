#include "msgProcess.h"

QString getKeyValue(const QByteArray &message, QString s)
{
    QJsonParseError json_error;
    QJsonDocument document = QJsonDocument::fromJson(message,&json_error);

    if(QJsonParseError::NoError == json_error.error)
    {
        if(document.isObject())
        {
            QJsonObject obj = document.object();
            if(obj.contains(s))
            {
                QJsonValue command_vaule = obj.take(s);
                QString str = command_vaule.toString();

                return str;
            }
        }
        return NULL;
    }
    return NULL;
}

QString cmdRespToJson(int code, QString message)
{
    QJsonObject json;
    json.insert("result_code", code);
    json.insert("result_message", message);

    QJsonDocument document;
    document.setObject(json);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);

    return strJson;
}
