#pragma once
#include "Tools.h"

class Particle { 
public:  
	Particle(Vector p, Vector v, float l, float sd, Color cd);
	Vector pos;         
	Vector vel;         
	float lifetime; 
	float sizeDeviation;
	Color colorDeviation;
};

class ParticleEmitter { 
public:         
	ParticleEmitter(unsigned int particleCount, unsigned int textureID, ShaderProgram *shader);
	ParticleEmitter();                   
	void update(float elapsed);         
	void render();
	
	Vector pos;
	Vector vel;
	Vector velDev;
	Vector gravity;         
	float maxLifetime;
	float startSize;         
	float endSize;         
	float maxSizeDeviation;
	Color startColor;
	Color endColor;
	Color colorDeviation;
	std::vector<Particle*> particles;
	unsigned int textureID;
	ShaderProgram *shader;
	
};