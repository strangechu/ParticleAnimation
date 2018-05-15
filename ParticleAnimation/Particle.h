#pragma once

struct Vector2 {
	float x;
	float y;
	Vector2() : x(0.0f), y(0.0f) {}
	Vector2(float a, float b) : x(a), y(b) {}

	Vector2 operator+(Vector2 a) {
		return { a.x + x, a.y + y };
	}

};

class Particle
{

public:
	Particle();
	Particle(Vector2 p, Vector2 v, Vector2 f, float m);
	~Particle();

	Vector2 position;
	Vector2 velocity;
	Vector2 force;
	float mass;
};

