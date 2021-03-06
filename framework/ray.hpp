#ifndef RAY_HPP
#define RAY_HPP

#include <glm/vec3.hpp>

struct Ray {

	glm::vec3 origin;
	glm::vec3 direction;
	glm::vec3 inv_direction;
	
    Ray():   
    origin{glm::vec3{}},
    direction{glm::vec3{}},
	inv_direction{glm::vec3{-0.0,-0.0,-0.0}}{}

    Ray(Ray const& ray):
    origin{ray.origin},
    direction{ray.direction},
	inv_direction{ray.inv_direction}{}

    Ray(glm::vec3 origin, glm::vec3 dir):
    origin{origin},
    direction{dir},
	inv_direction{glm::vec3{1.0/dir.x, 1.0/dir.y, 1.0/dir.z}}{}

    ~Ray(){}

};

#endif
