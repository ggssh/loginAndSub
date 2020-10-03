#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QtCore>
#include <QDialog>
#include <string>
// 对关机、解锁等函数的定义

bool m_shutdown();//关机
bool m_unlock();//解锁
bool m_lock();//锁定
bool m_sleep();//睡眠
bool m_await();//待机
bool m_downline();//下线(注销)
bool m_startup();//开机
bool oper(QString op);
void autostart();

#endif // OPERATIONS_H
