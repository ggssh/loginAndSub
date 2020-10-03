#include "windows.h"
#include "WinUser.h"
#include <operations.h>
#include <QApplication>
#include <QtCore>
#include <QMessageBox>

#define TR(str) (QStringLiteral(str))

using namespace std;
//关机
bool m_shutdown()
{
    if(!system("shutdown -s -t 00"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//重启
bool m_lock()
{
    if(!system("rundll32.exe user32.dll, LockWorkStation"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//休眠
bool m_await()
{
    if(!system("shutdown -h"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//注销
bool m_downline()
{
    if(!system("shutdown -l"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//睡眠
bool m_sleep()
{
    if(!system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//根据获取到的command进行关机锁定等操作
bool oper(QString op)
{
    if(op == "shutdown")
    {
        if(m_shutdown())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(op == "lock")
    {
        if(m_lock())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(op == "await")
    {
        if(m_await())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(op == "downline")
    {
        if(m_downline())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(op == "sleep")
    {
        if(m_sleep())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

void autostart()
{
    
}