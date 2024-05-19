#pragma once
#include "afxdialogex.h"


// LOGIN 对话框

class LOGIN : public CDialog
{
	DECLARE_DYNAMIC(LOGIN)

public:
	LOGIN(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~LOGIN();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PASSWORD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_password;
	void GetPassword(CString& password);
};
