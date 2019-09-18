#include "pch.h"
#include "STestDlg.h"

namespace SOUI
{
	STestDlg::STestDlg():SHostDialog(_T("TEST:TestDlg"))
	{
	}

	STestDlg::~STestDlg()
	{
	}

	void STestDlg::OnClose()
	{
		SHostDialog::OnCancel();
	}
}
