
// mouseView.h : CmouseView クラスのインターフェイス
//

#pragma once


class CmouseView : public CView
{
protected: // シリアル化からのみ作成します。
	CmouseView();
	DECLARE_DYNCREATE(CmouseView)

// 属性
public:
	CmouseDoc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 実装
public:
	virtual ~CmouseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mouseView.cpp のデバッグ バージョン
inline CmouseDoc* CmouseView::GetDocument() const
   { return reinterpret_cast<CmouseDoc*>(m_pDocument); }
#endif

