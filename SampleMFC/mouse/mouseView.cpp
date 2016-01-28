
// mouseView.cpp : CmouseView クラスの実装
//

#include "stdafx.h"
// SHARED_HANDLERS は、プレビュー、縮小版、および検索フィルター ハンドラーを実装している ATL プロジェクトで定義でき、
// そのプロジェクトとのドキュメント コードの共有を可能にします。
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
	// 標準印刷コマンド
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CmouseView コンストラクション/デストラクション

CmouseView::CmouseView()
{
	// TODO: 構築コードをここに追加します。

}

CmouseView::~CmouseView()
{
}

BOOL CmouseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CmouseView 描画

void CmouseView::OnDraw(CDC* /*pDC*/)
{
	CmouseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}


// CmouseView 印刷

BOOL CmouseView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 既定の印刷準備
	return DoPreparePrinting(pInfo);
}

void CmouseView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷前の特別な初期化処理を追加してください。
}

void CmouseView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷後の後処理を追加してください。
}


// CmouseView 診断

#ifdef _DEBUG
void CmouseView::AssertValid() const
{
	CView::AssertValid();
}

void CmouseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmouseDoc* CmouseView::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmouseDoc)));
	return (CmouseDoc*)m_pDocument;
}
#endif //_DEBUG


// CmouseView メッセージ ハンドラー
