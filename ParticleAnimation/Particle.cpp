#include "Particle.h"



Particle::Particle()
{
	Particle(Vector2(0.0f, 0.0f), Vector2(0.0f, 0.0f), Vector2(0.0f, 0.0f), 1.0f);
}

Particle::Particle(Vector2 p, Vector2 v, Vector2 f, float m)
{
	position = p;
	velocity = v;
	force = f;
	mass = m;
}


Particle::~Particle()
{
}
