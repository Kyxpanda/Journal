#include <Journal.h>

class Sandbox : public Journal::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Journal::Application* Journal::CreateApplication()
{
	return new Sandbox;
}