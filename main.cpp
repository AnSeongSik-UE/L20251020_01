#include <iostream>
#include <fstream>
#include <vector>

#include "Engine.h"

int main(int argc, char* argv[])
{
	//FEngine* MyEngine = new FEngine();
	//MyEngine->Init();
	//MyEngine->Run();
	//MyEngine->Term();

	//delete MyEngine;
	//MyEngine = nullptr;

	char Actor;
	std::ifstream MapFile("Level01.map");

	if (!MapFile.is_open()) {
		std::cerr << "Error: Could not open file." << std::endl;
	}

	while (MapFile.get(Actor))
	{
		std::cout << Actor;
	}

	MapFile.close();

	return 0;
}