// cppblbridge.h

#pragma once

#include "../cpp_proj/cpp_proj.h"

using namespace System;

namespace cppblbridge {

	public ref class CppBLBridge
	{
	private:
		Ccpp_proj* m_cppBL;
	public:
		CppBLBridge();
		~CppBLBridge();
		double getTestValue();
		void threadFunction();
		void SetTime(int);
	};
}