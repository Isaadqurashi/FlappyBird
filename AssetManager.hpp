#pragma once

#include <map>

#include<SFML/Graphics.hpp>

namespace Flappy
{
	class AssetManager
	{
	public:
		AssetManager() { }
		~AssetManager() { }

		void LoadTexture(std::string name, std::string fileName);

	};

}
