
// mouseView.cpp : CmouseView �N���X�̎���
//

#include "stdafx.h"
// SHARED_HANDLERS �́A�v���r���[�A�k���ŁA����ь����t�B���^�[ �n���h���[���������Ă��� ATL �v���W�F�N�g�Œ�`�ł��A
// ���̃v���W�F�N�g�Ƃ̃h�L�������g �R�[�h�̋��L���\�ɂ��܂��B
#ifndef SHARED_HANDLERS
#include "mouse.h"
#endif

#include "mouseDoc.h"
#include "mouseView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmouseView

IMPLEMENT_DYNCREATE(CmouseView, CView)

BEGIN_MESSAGE_MAP(CmouseView, CView)
	// �W������R�}���h
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CmouseView �R���X�g���N�V����/�f�X�g���N�V����

CmouseView::CmouseView()
{
	// TODO: �\�z�R�[�h�������ɒǉ����܂��B

}

CmouseView::~CmouseView()
{
}

BOOL CmouseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: ���̈ʒu�� CREATESTRUCT cs ���C������ Window �N���X�܂��̓X�^�C����
	//  �C�����Ă��������B

	return CView::PreCreateWindow(cs);
}

// CmouseView �`��

void CmouseView::OnDraw(CDC* /*pDC*/)
{
	CmouseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���̏ꏊ�Ƀl�C�e�B�u �f�[�^�p�̕`��R�[�h��ǉ����܂��B
}


// CmouseView ���

BOOL CmouseView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ����̈������
	return DoPreparePrinting(pInfo);
}

void CmouseView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ����O�̓��ʂȏ�����������ǉ����Ă��������B
}

void CmouseView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �����̌㏈����ǉ����Ă��������B
}


// CmouseView �f�f

#ifdef _DEBUG
void CmouseView::AssertValid() const
{
	CView::AssertValid();
}

void CmouseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmouseDoc* CmouseView::GetDocument() const // �f�o�b�O�ȊO�̃o�[�W�����̓C�����C���ł��B
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmouseDoc)));
	return (CmouseDoc*)m_pDocument;
}
#endif //_DEBUG


// CmouseView ���b�Z�[�W �n���h���[
