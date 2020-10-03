#ifndef MQTTACTION_H
#define MQTTACTION_H

#include <QtNetwork>
#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>

//自定义发布以及订阅函数
bool m_publish(QMqttClient *m_client, QString topic, QString message);
bool m_subscribe(QMqttClient *m_client, QString topic, int qos);

#endif // MQTTACTION_H
