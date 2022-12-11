/*
 ============================================================================
 Name        : PATFORM_TYPES_H.h Author      : Mario_Adel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

typedef signed char   		sint8;
typedef unsigned char 		uint8;
typedef signed short 		sint16;
typedef unsigned short 		uint16;
typedef signed int 			sint32;
typedef unsigned int 		uint32;

typedef signed long long int        sint64_t;
typedef unsigned long long int      uint64_t;


typedef volatile char 						vchar_t;
typedef volatile signed char				vsint8_t;
typedef volatile unsigned char 				vuint8_t;
typedef volatile signed short 				vsint16_t;
typedef volatile unsigned short 			vuint16_t;
typedef volatile signed int 				vsint32_t;
typedef volatile unsigned int 				vuint32_t;
typedef volatile signed long long int 		vsint64_t;
typedef volatile unsigned long long int 	vuint64_t;


typedef float 				float32;
typedef double 				float64;


	#ifndef TRUE
	#define TRUE    ((boolean) 1)
	#endif

	#ifndef FALSE
	#define FALSE   ((boolean) 0)
	#endif

#endif
