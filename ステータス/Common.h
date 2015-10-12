
#pragma once
#include <memory>
#include <iostream>
#include <string>
#include <fstream>
#include "lib\appEnv.hpp"

class cApp
{
public:
	cApp();
	static std::shared_ptr<AppEnv> app_env;
};