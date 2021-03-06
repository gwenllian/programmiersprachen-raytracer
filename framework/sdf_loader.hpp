#ifndef BUW_SDF_LOADER_HPP
#define BUW_SDF_LOADER_HPP
#include <iostream>
#include <string>
#include "scene.hpp"
#include <fstream> 
#include "material.hpp"
#include <map>
using namespace std;

class Sdf_loader
{
public:
	Sdf_loader(std::string file);
	Sdf_loader();
	~Sdf_loader();

	//Scene loadScene(std::file) const;
	
	void load_material(std::string file, std::map<std::string, Material>& material);
	std::string get_file() const;

	string getWord();

private:
	std::string file_;

};


#endif // #ifndef BUW_SDF_LOADER_HPP