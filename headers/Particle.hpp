#ifndef HEADERS_PARTICLE_HPP
#define HEADERS_PARTICLE_HPP

#include <SFML/System/Vector2.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Color.hpp>


struct Particle 
{
	enum Type
	{
		Propellant,
		Smoke,
		ParticleCount
	};

	sf::Vector2f	position;
	sf::Color		color;
	sf::Time		lifetime;
};

#endif // HEADERS_PARTICLE_HPP
