#include <Conway.h>

class Sandbox : public Conway::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Conway::Application* Conway::CreateApplication() {
	return new Sandbox();
}