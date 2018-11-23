#ifndef DEF_ENEMY_H
#define DEF_ENEMY_H
#include "Chara.h"

#define SHOT_PACE 300

class Enemy : public Chara
{
public:
	Enemy();
	~Enemy();
	Enemy(int*);

	void init();
	void Update();
	void Draw();
	void End();

	void Move_AI();
	void Destination(const int&, const int&);

private:
	int stop_y;
	bool nowMovingX;
	bool nowMovingY;
	int moveX;
	int moveY;
	int x_flag;
	int y_flag;

	int shotCount;
};

#endif // !DEF_ENEMY_H
