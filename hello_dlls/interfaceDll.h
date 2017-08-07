#pragma once
#ifdef VERSAO_DLL
	#define DLL_INTERFACE __declspec(dllexport)
#endif
#ifdef VERSAO_CLIENTE
	#define DLL_INTERFACE __declspec(dllimport)
#endif
extern "C"
{
	DLL_INTERFACE float Soma(float v1, float v2);
}