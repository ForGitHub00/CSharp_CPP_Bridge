// Приведенный ниже блок ifdef - это стандартный метод создания макросов, упрощающий процедуру 
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа CPP_PROJ_EXPORTS,
// в командной строке. Этот символ не должен быть определен в каком-либо проекте
// использующем данную DLL. Благодаря этому любой другой проект, чьи исходные файлы включают данный файл, видит 
// функции CPP_PROJ_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef CPP_PROJ_EXPORTS
#define CPP_PROJ_API __declspec(dllexport)
#else
#define CPP_PROJ_API __declspec(dllimport)
#endif

// Этот класс экспортирован из cpp_proj.dll
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
