//-----------------------------------------------------------
//CLASS_TEST_MANAGER_H
//-----------------------------------------------------------
//--------------------------------------
//システムインクルード
#include "C_Test_Mgr.h"
c_Test_Mgr::c_Test_Mgr()
{

}
void c_Test_Mgr::Init_Test_Mgr(void)
{
	m_pCamera		= new c_Camera;
	m_pCamera->InitCamera(true);
	m_pCamera->SetCameraPos(D3DXVECTOR3(0.0f,3.0f,-10.0f),D3DXVECTOR3(0.0f,0.0f,0.0f));
	m_pCamera->SystemSet_D3DTVIEW();

	m_pLight		= new c_Light;
	m_pLight->CreatLightSunDefault(0);
	m_pLight->ActiveLightSYS();

	m_pObject		= new c_Test_model;
	m_pObject->Init_LoadModel();

	m_pPrimitive	= new c_Primitive;
	m_pPrimitive->SetFileName("data/Texture/title_logo.png");
	m_pPrimitive->Init_Primitive();
	m_pPrimitive->SetSize(D3DXVECTOR3(2.0f,0.5f,0.0f));
	m_pPrimitive->SetPos(D3DXVECTOR3(0.0f,0.0f,-2.0f));

	m_pFont			= new c_Font;
	m_pFont->CreatFont(NULL,0.0f);
}
void c_Test_Mgr::Update_Test_Mgr(void)
{
	m_pCamera->UpdateCameraRavolution();
	m_pObject->UpdateModel();
	m_pPrimitive->Update_PrimitiveNormal();
}
void c_Test_Mgr::Uninit_Test_Mgr(void)
{
	m_pLight->Uninit();
	SAFE_DELETE(m_pLight);
	m_pObject->UninitModel();
	SAFE_DELETE(m_pObject);
	m_pCamera->UninitCamera();
	SAFE_DELETE(m_pObject);	

	m_pPrimitive->Uninit_Primitive();
	SAFE_DELETE(m_pPrimitive);

	SAFE_DELETE(m_pFont);
}
void c_Test_Mgr::Draw_Test_Mgr(void)
{
	m_pLight->Update();
	m_pCamera->DrawCamera();
	m_pObject->DrawModel();
	m_pPrimitive->DrawPrimitive();
	m_pFont->DrawCord("This is a Test",9999,D3DXVECTOR3(0.0f,0.0f,0.0f));
}
void c_Test_Mgr:: UseTestMgr(bool bInput)
{
	m_bTestVersion = bInput;
}
bool c_Test_Mgr::GetTestMgrUse(void)
{
	return m_bTestVersion;
}

//-----------------------------------------------------------
//End of File