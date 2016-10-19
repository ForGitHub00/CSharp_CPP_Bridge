// cpp_proj.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "cpp_proj.h"


// Пример экспортированной переменной
CPP_PROJ_API int ncpp_proj=0;

// Пример экспортированной функции.
CPP_PROJ_API int fncpp_proj(void)
{
    return 42;
}

// Конструктор для экспортированного класса.
// см. определение класса в cpp_proj.h
Ccpp_proj::Ccpp_proj()
{
    return;
}
