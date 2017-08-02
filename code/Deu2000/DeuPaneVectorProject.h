/*-----------------------------------
		 ������崰��
------------------------------------*/

#include "resource.h"
#include "DeuVectorProjectView.h"

class CDeuPaneVectorProject : public CXTPDialog
{
public:
	CDeuPaneVectorProject(CWnd* pParent = NULL);	 // standard constructor

	// Dialog Data
	enum { IDD = IDD_DLG_PANEL_TAB };
	
protected:
	virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnLbnSelchange();
	afx_msg void OnBnClickedTaskBatAdd();
	afx_msg void OnBnClickedTaskRemove();
	afx_msg void OnBnClickedTaskRemoveAll();
	afx_msg void OnBnClickedTaskProcess();	

public:
	afx_msg void OnBnClickedTaskAdd();

protected:
	HICON m_hIcon;
	CEdit m_wndEdit[3];
	CFont m_fntEdit;
	CString m_strIniFileName;

	DECLARE_MESSAGE_MAP()

public:
	CListBox m_ListBox;
	CDeuVectorProjectView* p_View;
	int nListIndex;

	void InsertListItem(const char *p_ItemName);
	void DelTaskItem(int nIndex);
};