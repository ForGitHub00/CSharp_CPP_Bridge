// ����������� ���� ���� ifdef - ��� ����������� ����� �������� ��������, ���������� ��������� 
// �������� �� ��������� DLL. ��� ����� ������ DLL �������������� � �������������� ������� CPP_PROJ_EXPORTS,
// � ��������� ������. ���� ������ �� ������ ���� ��������� � �����-���� �������
// ������������ ������ DLL. ��������� ����� ����� ������ ������, ��� �������� ����� �������� ������ ����, ����� 
// ������� CPP_PROJ_API ��� ��������������� �� DLL, ����� ��� ������ DLL ����� �������,
// ������������ ������ ��������, ��� ����������������.
#ifdef CPP_PROJ_EXPORTS
#define CPP_PROJ_API __declspec(dllexport)
#else
#define CPP_PROJ_API __declspec(dllimport)
#endif

// ���� ����� ������������� �� cpp_proj.dll
class CPP_PROJ_API Ccpp_proj {
public:
	Ccpp_proj(void);
	double GetMyValue(double a) {		
		double d = a;
		return a;
	}
};

extern CPP_PROJ_API int ncpp_proj;

CPP_PROJ_API int fncpp_proj(void);
