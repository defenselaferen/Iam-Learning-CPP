#ifndef REQUIREMENTS_H
#define REQUIREMENTS_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_REQUIREMENTS
#define REQUIREMENTS __declspec(dllexport)
#else
#define REQUIREMENTS __declspec(dllimport)
#endif

void __stdcall REQUIREMENTS Test();
int REQUIREMENTS WIDTH();
int REQUIREMENTS HEIGHT();

#ifdef __cplusplus
}
#endif

#endif