
// firstMFCDlg.h : header file
//

#pragma once


// CfirstMFCDlg dialog
class CfirstMFCDlg : public CDialog
{
// Construction
public:
	CfirstMFCDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FIRSTMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_text;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit2();
	CString m_text2;
};
