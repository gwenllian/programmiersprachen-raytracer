#ifndef BUW_Scene_HPP
#define BUW_Scene_HPP
#include <iostream>
#include <string>
#include "color.hpp"
#include "shape.hpp"
#include "ray.hpp"
#include "material.hpp"
#include <map>
#include <vector>

struct Scene
{
	std::map<std::string, Material> material;
	std::vector<Shape> shapes; // shared pointer
	//std::vector<LightSource> lights;
	Color ambient;
};


#endif // #ifndef BUW_SCENE_HPP