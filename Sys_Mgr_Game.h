//-----------------------------------------------------------
//SYS_MGR_GAME_H
//-----------------------------------------------------------
#ifndef SYS_MGR_GAME_H
#define SYS_MGR_GAME_H
//--------------------------------------
//システムインクルード
#include "Sys_Include.h"

#include "Sys_C_Sound_Mgr.h"
//--------------------------------------
//マスターズインクルード
//--------------------------------------
//インスタンスインクルード
//--------------------------------------
//マネージャーインクルード
#include "C_Test_Mgr.h"
//--------------------------------------
//マクロ定義
typedef enum
{
	GAME_MODE_TITLE = 0,
	GAME_MODE_PLAY,
	GAME_MODE_RESULT,
	GAME_MODE_MAX,
}GAME_MODE;
//--------------------------------------
//構造体宣言
//--------------------------------------
//クラス宣言
//--------------------------------------
//オブジェクトグローバル変数宣言
//--------------------------------------
//係数グローバル変数宣言
//--------------------------------------
//プロトタイプ宣言
HRESULT Init_SysGame(void);
void	Uninit_SysGame(void);
void	Update_SysGame(void);
void	Draw_SysGame(void);
//--------------------------------------
//初期化処理
//--------------------------------------
//終了処理
//--------------------------------------
//更新処理
//--------------------------------------
//描画処理
#endif