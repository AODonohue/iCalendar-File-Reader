/*********************************************************************
 * FILE NAME: caltool.h
 * AUTHOR: Andrew O'Donohue
 * PURPOSE: Interface for caltool.c.
 *********************************************************************/

#ifndef CALTOOL_H
#define CALTOOL_H A2_RevA

#define _GNU_SOURCE
#define _XOPEN_SOURCE

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include <stdbool.h>
#include "calutil.h"


typedef enum {
    OEVENT,
    OPROP,
    OTODO,
} CalOpt;

/* Caltool Public Functions */
CalStatus calInfo( const CalComp *comp, int lines, FILE *const txtfile );
CalStatus calExtract( const CalComp *comp, CalOpt kind, FILE *const txtfile );
CalStatus calFilter( const CalComp *comp, CalOpt content, time_t datefrom, time_t dateto, FILE *const icsfile );
CalStatus calCombine( const CalComp *comp1, const CalComp *comp2, FILE *const icsfile );

#endif
