// LOGIN.cpp: 实现文件
//

#include "pch.h"
#include "chap9lab3.h"
#include "afxdialogex.h"
#include "LOGIN.h"


// LOGIN 对话框

IMPLEMENT_DYNAMIC(LOGIN, CDialog)

LOGIN::LOGIN(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_PASSWORD, pParent)
{
}

LOGIN::~LOGIN()
{
}

void LOGIN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PASSWORD, m_password);
}


BEGIN_MESSAGE_MAP(LOGIN, CDialog)
END_MESSAGE_MAP()


// LOGIN 消息处理程序
void LOGIN::GetPassword(CString& password)
{
	password = m_password;
}