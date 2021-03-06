#pragma once
#include <Object.h>
class Bullet
{
public:

	Bullet() {}

	~Bullet() {}

	void Load();
	//初期化
	void Init(int number);
	//更新
	void Update(int number);
	//描画
	void Draw();
private:
	Object::ObjectData bulletOBJ;
	Vec3 position{};
	Vec3 scale{ 1.0f,1.0f,1.0f };
	Vec3 angle{};
	Vec4 color{};

	Vec3 vec = {};
	float gravity = 0.0f;
	float gravityAccel = 0.03f;

	Vec3 Vec0 = { 1.0f,1.0f,0.0f };//初速度
};

