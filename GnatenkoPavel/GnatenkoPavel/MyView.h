#pragma once


// Просмотр MyView

class MyView : public CView
{
	DECLARE_DYNCREATE(MyView)

protected:
	MyView();           // защищенный конструктор, используемый при динамическом создании
	virtual ~MyView();

public:
	virtual void OnDraw(CDC* pDC); 
	CString m_strText;
	CString m_strText1;
	CString m_strText2;
	CString m_strText3;
	CString m_strText4;
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
};


