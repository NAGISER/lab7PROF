#pragma once
#include "Service.h"
#include <fstream>
#include <iostream>
#include "json.hpp"
using nlohmann::json;
class JsonService :public Service
{
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};

};
