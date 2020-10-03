#include "mqttAction.h"


bool m_publish(QMqttClient *m_client, QString topic, QString message)
{
    if(m_client->publish(topic, message.toUtf8(), 1, 0) == -1)
    {
        return false;
    }
    return true;
}

bool m_subscribe(QMqttClient *m_client, QString topic, int qos)
{
    auto sub = m_client->subscribe(topic, qos);
    if(!sub)
    {
        return false;
    }
    return true;
}
