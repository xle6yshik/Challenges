// #pragma once

#ifndef _VARS_G4C_H
#define _VARS_G4C_H

#include "vars.h"

/*
*
*/

u32_t Cnst[] =
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// u32_t n_Cnst = sizeof(Cnst) / sizeof(Cnst[0]); // 23
u32_t n_Cnst = n_count(Cnst); // 23

/*
*
*/

u32_t User[] =
{
  0, 0
};

// u32_t n_User = sizeof(User) / sizeof(User[0]); // 2
u32_t n_User = n_count(User); // 2
/*
*
*/

u32_t Rslt[] =
{
  0
};

// u32_t n_Rslt = sizeof(Rslt) / sizeof(Rslt[0]); // 1
u32_t n_Rslt = n_count(Rslt); // 1

u32_t *p_Rslt = &Rslt[0];

/*
*
*/

u32_t Actn[] =
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// u32_t n_Actn = sizeof(Actn) / sizeof(Actn[0]); // 10
u32_t n_Actn = n_count(Actn); // 10

u32_t Calc[] =
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// u32_t n_Calc = sizeof(Calc) / sizeof(Calc[0]); // 10
u32_t n_Calc = n_count(Calc); // 10

/*
*
*/

bool Flag = false;

/*
*
*/

scan_t *Scanner = nullptr;

#endif
