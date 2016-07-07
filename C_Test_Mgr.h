//-----------------------------------------------------------
//CLASS_TEST_MANAGER_H
//-----------------------------------------------------------
#ifndef CLASS_TEST_MANAGER_H
#define CLASS_TEST_MANAGER_H
//--------------------------------------
//�V�X�e���C���N���[�h
#include "Sys_Include.h"
//--------------------------------------
//�}�X�^�[�Y�C���N���[�h
#include "Sys_C_Camera.h"
#include "Sys_C_Font.h"
#include "Sys_C_Primitive3D.h"
//--------------------------------------
//�C���X�^���X�C���N���[�h
#include "C_3D_Test_model.h"


//--------------------------------------
//�}�l�[�W���[�C���N���[�h
#include "C_Light_Mgr.h"
//--------------------------------------
//�}�N����`
//--------------------------------------
//�\���̐錾
//--------------------------------------
//�N���X�錾
class c_Test_Mgr
{
public:
	c_Test_Mgr();									// �R���X�g���N�^�\
	void Init_Test_Mgr(void);						// ����������
	void Update_Test_Mgr(void);						// �X�V����
	void Uninit_Test_Mgr(void);						// �J������
	void Draw_Test_Mgr(void);						// �`�揈��
	void UseTestMgr(bool bInput);					// �e�X�g�}�l�[�W����ON/OFF
	bool GetTestMgrUse(void);						// �e�X�g�}�l�[�W���̎擾
private:
	bool						m_bTestVersion;		// �e�X�gMGR�N�p���邩
	c_Test_model*				m_pObject;			// �e�X�g�p��3D�I�u�W�F�N�g
	c_Camera*					m_pCamera;			// �e�X�g�p�̃J����
	c_Font*						m_pFont;			// �e�X�g�p�̃t�H���g
	c_Primitive*				m_pPrimitive;		// �e�X�g�p�̃v���~�e�B�u�`��
	c_Light_Mgr*				m_pLight_Mgr;		// �����}�l�[�W��
};

//--------------------------------------
//�I�u�W�F�N�g�O���[�o���ϐ��錾
//--------------------------------------
//�W���O���[�o���ϐ��錾
//--------------------------------------
//�v���g�^�C�v�錾
//--------------------------------------
//����������
//--------------------------------------
//�I������
//--------------------------------------
//�X�V����
//--------------------------------------
//�`�揈��
#endif
//-----------------------------------------------------------
//End of File