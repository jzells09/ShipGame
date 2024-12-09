#pragma once
class Ship
{
private:
	int m_xPos;
	int m_yPos;

	int m_xVelocity;
	int m_yVelocity;

	int m_dx;
	int m_dy;
	
	int m_rotationAngle;
public:
	void Draw() const;
	void Update();
	Ship();
};

