#include "CManager_SampleScene.h"
#include "Packages/00000302000101-Module_DirectX_Common/Client/Classes/Global/Utility/Mesh/CMesh.h"
#include "Packages/00000302000101-Module_DirectX_Common/Client/Classes/Global/Utility/Mesh/CMesh_Skeletal.h"

CManager_SampleScene::CManager_SampleScene(HINSTANCE a_hInst, int a_nOpt_Show, const SIZE& a_rstSize_Wnd)
	:
	CApp_D3D(a_hInst, a_nOpt_Show, a_rstSize_Wnd)
{
	// Do Something
}

CManager_SampleScene::~CManager_SampleScene(void)
{
	SAFE_DEL(m_pGunShip);
	SAFE_DEL(m_pElementalist);
	SAFE_DEL(m_pWitchApprentice);
}

void CManager_SampleScene::Update(float a_fTime_Delta)
{
	CApp_D3D::Update(a_fTime_Delta);
}

void CManager_SampleScene::Render(ID3D10Device* a_pDevice)
{
	CApp_D3D::Render(a_pDevice);
	//m_pGunShip->Render(a_pDevice);
}

void CManager_SampleScene::LateInit(void)
{
	CApp_D3D::LateInit();
	//m_pGunShip = new CMesh("Resources/Meshes/GunShip/GunShip.x", "Resources/Effects/GunShip.fx");
}
