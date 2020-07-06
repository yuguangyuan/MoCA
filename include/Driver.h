/**
    MoCA - Method of Characteristics for Axisymmetric flows

    Copyright (C) 2020 by

    \author: Guilherme Bertoldo
             Federal University of Technology - Parana (UTFPR)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DRIVER_H_INCLUDED
#define DRIVER_H_INCLUDED

#include <iostream>
#include <cstdio>
#include "NozzleMoCRao.h"
#include "RaoControlSurface.h"
#include "NozzleMoCAdaptive.h"
#include "WallCircularSection.h"
#include "WallConicalDivergent.h"
#include "WallInterpolatedDivergent.h"

#include <memory>
#include <cmath>
#include "NozzleMoC.h"
#include "IO.h"
#include "CSVHandler.h"

namespace Driver
{

/**
    \brief Executes the code in accordance to the configuration file.
*/
void run();


/**
    \brief Applies adaptive MoC to solve the flow through a nozzle.
*/
void runNozzleMoC();


/**
    \brief Applies adaptive MoC to solve the flow through a nozzle.
*/
void runNozzleMoCAdaptive();


/**
    \brief Applies the MoC to generate the optimum Rao's nozzle and
    to solve the flow through this nozzle.
*/
void runNozzleMoCRao();


}

#endif // DRIVER_H_INCLUDED
