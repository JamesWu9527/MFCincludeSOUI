#pragma once

//#include "core\SHostDialog.h"

namespace SOUI
{
	class STestDlg :public SHostDialog
	{
	public:
		STestDlg();
		~STestDlg();

	protected:
		void OnClose();

	protected:
		//soui消息
		EVENT_MAP_BEGIN()
			EVENT_NAME_COMMAND(L"btn_close", OnClose)
			EVENT_MAP_END()

			//HostWnd真实窗口消息处理
			BEGIN_MSG_MAP_EX(STestDlg)
			MSG_WM_CLOSE(OnClose)
			MSG_WM_SIZE(OnSize)
			CHAIN_MSG_MAP(SHostDialog)
			REFLECT_NOTIFICATIONS_EX()
			END_MSG_MAP()
	};

}

