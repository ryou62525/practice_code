
// mouseView.h : CmouseView �N���X�̃C���^�[�t�F�C�X
//

#pragma once


class CmouseView : public CView
{
protected: // �V���A��������̂ݍ쐬���܂��B
	CmouseView();
	DECLARE_DYNCREATE(CmouseView)

// ����
public:
	CmouseDoc* GetDocument() const;

// ����
public:

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷�邽�߂ɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~CmouseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mouseView.cpp �̃f�o�b�O �o�[�W����
inline CmouseDoc* CmouseView::GetDocument() const
   { return reinterpret_cast<CmouseDoc*>(m_pDocument); }
#endif

