#include "GameEngineRenderer.h"
#include "GameEngineActor.h"
#include "GameEngineLevel.h"
#include <Windows.h>
#include <GameEngineBase/GameEngineWindow.h>

#include "GameEngineVertexBuffer.h"
#include "GameEngineIndexBuffer.h"

GameEngineRenderer::GameEngineRenderer() 
{
}

GameEngineRenderer::~GameEngineRenderer() 
{
}


void GameEngineRenderer::Start() 
{
	GetActor()->GetLevel()->PushRenderer(this);
}

float4 XDir = { 1, 0 };
float4 YDir = { 0, -1 };

float Angle = 0.0f;
float Dis = 0.0f;
float4 Postion;

void GameEngineRenderer::Render(float _DeltaTime)
{
	// 방향을 정했고.
	// 나아가는 크기가 1이 아니라는 겁니다.
	// _DeltaTime *= 200.0f;

	// float4 Dir = float4::DegreeToDirection2D(Angle);

	// x 100.0f = cosf(각도) * 빗변의 길이
	// y 100.0f = sinf(각도) * 빗변의 길이
	
	float4 Dir = {0.0f, 0.0f, 0.0f};

    float4::VectorRotationToDegreeZ(Dir, Angle);
	Angle += _DeltaTime * 360.0f;
	Dis += _DeltaTime * 10.0f;

	GetActor()->GetTransform().SetPosition(float4{300.0f, 300.0f} + Dir * Dis);

	// GetActor()->GetTransform().SetMove(Dir * _DeltaTime * 200.0f);

	// 랜더링
	GameEngineVertexBuffer* Vertex = GameEngineVertexBuffer::Find("Rect");
	GameEngineIndexBuffer* Index = GameEngineIndexBuffer::Find("Rect");
	
	std::vector<POINT> DrawVertex;
	DrawVertex.resize(Index->Indexs.size());

	std::vector<float4> CopyBuffer;
	CopyBuffer.resize(Index->Indexs.size());



	for (size_t i = 0; i < Index->Indexs.size(); i++)
	{
		int TriIndex = Index->Indexs[i];

		// 0 번째 순서의 점이 됩니다.
		CopyBuffer[i] = Vertex->Vertexs[TriIndex];

		// [0.5f] [0.5f] []                  [100] [100] [] 
		// 크
		CopyBuffer[i] *= GetActor()->GetTransform().GetScale();

		// 자전
		CopyBuffer[i] = float4::VectorRotationToDegreeZ(CopyBuffer[i], Angle);

		// 이동
		CopyBuffer[i] = GetActor()->GetTransform().GetPosition() + float4::VectorRotationToDegreeZ(GetActor()->GetTransform().GetPosition(), Angle);

		

		DrawVertex[i] = CopyBuffer[i].GetConvertWindowPOINT();
	}

	
	for (size_t i = 0; i < DrawVertex.size(); i += 3)
	{
		Polygon(GameEngineWindow::GetHDC(), &DrawVertex[i], 3);
	}
	

	// Rectangle(GameEngineWindow::GetHDC(), LeftTop.ix(), LeftTop.iy(), RightBot.ix(), RightBot.iy());
}