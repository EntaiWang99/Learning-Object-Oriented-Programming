#ifdef DLL_EXPORTS
	#define DLL_API __declspec(dllexport) //动态引用
#else
	#define DLL_API __declspec(dllimport) //静态引用
#endif

DLL_API void Display();
