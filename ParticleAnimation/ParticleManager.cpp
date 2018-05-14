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
	Particle p(Vector2(0.1, 0.1), Vector2(), Vector2(), 0.1);
	particles.push_back(p);
	p.position = Vector2(-0.2, -0.2);
	particles.push_back(p);
	p.position = Vector2(0.5, -0.5);
	particles.push_back(p);
}

void ParticleManager::draw()
{
	for (std::vector<Particle>::iterator it = particles.begin(); it != particles.end(); it++) {
		drawCircle(it->position.x, it->position.y, 0.1);
	}
}