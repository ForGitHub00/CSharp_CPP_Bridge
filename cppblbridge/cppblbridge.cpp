// ֳכאגםûי DLL-פאיכ.

#include "stdafx.h"
#include <ctime>
#include "cppblbridge.h"

using namespace cppblbridge;
using namespace System::Threading;
double test = 0;
int tim = 1000;
void CppBLBridge::threadFunction()
{
	while (true)
	{
		if (test < 100000)
		{
			test++;
			Thread::Sleep(tim);
		}
		else
		{
			test = 0;
		}
	}
}
void CppBLBridge::SetTime(int t)
{
	tim = t;
}

CppBLBridge::CppBLBridge()
{
	//m_cppBL = new Ccppbusinesslogic();
	m_cppBL = new Ccpp_proj();
}
CppBLBridge::~CppBLBridge()
{
	delete m_cppBL;
	m_cppBL = 0;
}
double CppBLBridge::getTestValue()
{
	if (test == 0)
	{
		Thread^ th = gcnew Thread(gcnew ThreadStart(this, &CppBLBridge::threadFunction));
		th->Start();
	}
	


	Random r;
	double t = r.NextDouble();
	
	return m_cppBL->GetMyValue(test);
}

