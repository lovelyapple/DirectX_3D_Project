//-----------------------------------------------------------
//SYS_MGR_GAME_H
//-----------------------------------------------------------
//--------------------------------------
//システムインクルード
#include "Sys_Mgr_Game.h"

//---------------------------------------------------------
//MGRのインクルード
c_Mgr_Sound*		g_pMgr_Sound;
c_Test_Mgr*			g_pTest_Mgr;
HRESULT Init_SysGame(void)
{
	g_pMgr_Sound = new c_Mgr_Sound;
	g_pMgr_Sound->Init_SoundMgr();
	g_pMgr_Sound->CreatSoundBG(0,REPLAY_MODE_START);

	g_pTest_Mgr	= new c_Test_Mgr;
	g_pTest_Mgr->UseTestMgr(true);
	if(g_pTest_Mgr->GetTestMgrUse())
		g_pTest_Mgr->Init_Test_Mgr();


	return S_OK;
}

void	Uninit_SysGame(void)
{
	g_pMgr_Sound->Uninit_SoundMgr();
	SAFE_DELETE(g_pMgr_Sound);

	if(g_pTest_Mgr->GetTestMgrUse())
		g_pTest_Mgr->Uninit_Test_Mgr();
	SAFE_DELETE(g_pTest_Mgr);
}

void	Update_SysGame(void)
{

	g_pMgr_Sound->Update_SoundMgr();
	if(GetKeyboardTrigger(DIK_SPACE))
		g_pMgr_Sound->StopSound(0,0);

	if(GetKeyboardTrigger(DIK_M))
		g_pMgr_Sound->ContinueSound(0,0);


	if(g_pTest_Mgr->GetTestMgrUse())
		g_pTest_Mgr->Update_Test_Mgr();
}

void	Draw_SysGame(void)
{
	if(g_pTest_Mgr->GetTestMgrUse())
		g_pTest_Mgr->Draw_Test_Mgr();
}
