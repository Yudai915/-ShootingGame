#ifndef DEF_BALLET_H
#define DEF_BALLET_H
#include "Chara.h"
#include <DxLib.h>


class Ballet :public Chara
{
public:
	Ballet();
	~Ballet();
	Ballet(const VECTOR&, const eName&);

	void init();
	void Update();
	void Draw();
	void End();

	void Instance_this(const VECTOR&,const eName&);
	void Move_direction(const VECTOR&,const eName&);

	eName is_Insted;
};

#endif // !DEF_BALLET_H
