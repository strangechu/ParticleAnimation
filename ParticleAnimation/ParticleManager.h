#pragma once

#include <vector>
#include "Particle.h"

class ParticleManager
{
private:
	ParticleManager();
	~ParticleManager();

public:
	static ParticleManager* m_instance;

	std::vector<Particle> particles;

	static ParticleManager* ParticleManager::getInstance() {
		if (m_instance == NULL) {
			m_instance = new ParticleManager();
		}
		return m_instance;
	}


	void init();
	void draw();
	void clear();

	void initTask1();

	void step();
};

