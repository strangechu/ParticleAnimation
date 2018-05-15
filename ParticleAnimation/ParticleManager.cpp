#include "ParticleManager.h"
#include <GL/glut.h>

#define _USE_MATH_DEFINES
#include <math.h>

void drawCircle(float x, float y, float r)
{
	glColor3d(0.0f, 0.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 100; i++) {
		glVertex2f(std::cos(2 * M_PI * i / 100) * r + x, std::sin(2 * M_PI * i / 100) * r + y);
	}
	glEnd();
}

ParticleManager* ParticleManager::m_instance = NULL;

ParticleManager::ParticleManager()
{
	init();
}


ParticleManager::~ParticleManager()
{
}

void ParticleManager::init()
{
	initTask1();
}

void ParticleManager::draw()
{
	for (std::vector<Particle>::iterator it = particles.begin(); it != particles.end(); it++) {
		drawCircle(it->position.x, it->position.y, 0.05);
	}
}

void ParticleManager::clear()
{
	particles.clear();
}

void ParticleManager::initTask1()
{
	clear();

	Particle p(Vector2(-0.8, -0.8), Vector2(0.02, 0.02), Vector2(), 0.1);
	particles.push_back(p);

}

void ParticleManager::step()
{
	for (std::vector<Particle>::iterator it = particles.begin(); it != particles.end(); it++) {
		it->position = it->position + it->velocity;
		it->velocity = it->velocity + Vector2(0.0, -0.0005);
	}
}