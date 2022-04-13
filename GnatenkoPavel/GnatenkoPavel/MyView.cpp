// MyView.cpp: файл реализации
//

#include "pch.h"
#include "GnatenkoPavel.h"
#include "MyView.h"


// MyView

IMPLEMENT_DYNCREATE(MyView, CView)

MyView::MyView()
{

}

MyView::~MyView()
{
}

BEGIN_MESSAGE_MAP(MyView, CView)
END_MESSAGE_MAP()


// Рисование MyView

void MyView::OnDraw(CDC* pDC)
{

	CDocument* pDoc = GetDocument();
	// TODO: добавьте код отрисовки
	m_strText = "Количество жизней";

	CSize size = pDC->GetTextExtent(m_strText); // размеры текста
	int x = 10; // позиция вывода по ширине

	int y = 10; // позиция вывода по высоте

	pDC->TextOut(x, y, m_strText); // вывод строки с текстом

	CBrush brush;
	brush.CreateSolidBrush(RGB(255, 0, 0));

	pDC->SelectObject(&brush);

	pDC->Ellipse(10, 40, 40, 70);
	pDC->Ellipse(50, 40, 80, 70);
	pDC->Ellipse(90, 40, 120, 70);


	m_strText1 = "Количество баллов";

	CSize size1 = pDC->GetTextExtent(m_strText1); // размеры текста
	int x1 = 400; // позиция вывода по ширине

	int y1 = 10; // позиция вывода по высоте

	pDC->TextOut(x1, y1, m_strText1); // вывод строки с текстом


	m_strText2 = "0";

	CSize size2 = pDC->GetTextExtent(m_strText2); // размеры текста
	int x2 = 600; // позиция вывода по ширине

	int y2 = 10; // позиция вывода по высоте

	pDC->TextOut(x2, y2, m_strText2); // вывод строки с текстом


	m_strText3 = "Уровень игрока";

	CSize size3 = pDC->GetTextExtent(m_strText3); // размеры текста
	int x3 = 700; // позиция вывода по ширине

	int y3 = 10; // позиция вывода по высоте

	pDC->TextOut(x3, y3, m_strText3); // вывод строки с текстом


	m_strText4 = "1";

	CSize size4 = pDC->GetTextExtent(m_strText4); // размеры текста
	int x4 = 850; // позиция вывода по ширине

	int y4 = 10; // позиция вывода по высоте

	pDC->TextOut(x4, y4, m_strText4); // вывод строки с текстом
}


// Диагностика MyView

#ifdef _DEBUG
void MyView::AssertValid() const
{
	CView::AssertValid();
}

#ifndef _WIN32_WCE
void MyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif
#endif //_DEBUG


// Обработчики сообщений MyView
