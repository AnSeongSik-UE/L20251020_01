#include "Engine.h"

int main(int argc, char* argv[])
{

	//FEngine* MyEngine = new FEngine();

	//GEngine = MyEngine;

	//MyEngine->Init();
	//MyEngine->Run();
	//MyEngine->Term();	
	
	//delete MyEngine;
	//MyEngine = nullptr;

	GEngine->Init();
	GEngine->Run();
	GEngine->Term();

	delete GEngine;

	return 0;
}