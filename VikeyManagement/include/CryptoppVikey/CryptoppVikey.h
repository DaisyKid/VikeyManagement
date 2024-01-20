#pragma once

#include "stdafx.h"

#include <string>

// external api
class CryptoppVikey
{
public:
	CryptoppVikey();

	DWORD initVikey(const std::string& file);
	DWORD verifyVikey(const std::string& file);
};

