
#pragma once
#include <memory>
#include "lib\appEnv.hpp"

class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> env;
};