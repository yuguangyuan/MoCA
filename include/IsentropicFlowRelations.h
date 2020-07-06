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

#ifndef ISENTROPICFLOWRELATIONS_H
#define ISENTROPICFLOWRELATIONS_H

/**
    \brief IsentropicFlowRelations provides thermodynamics relations
    for isentropic flow of gases.
*/
class IsentropicFlowRelations
{
   public:

      /**
        \brief Constructor
      */
      IsentropicFlowRelations(const double& gamma);

      /**
        \brief Destructor
      */
      virtual ~IsentropicFlowRelations();

      /**
        \brief Pressure ratio p/p0 (0 index means stagnation condition)

        Code verified!
      */
      double Pr(const double& M);

      /**
        \brief Temperature ratio T/T0 (0 index means stagnation condition)

        Code verified!
      */
      double Tr(const double& M);

      /**
        \brief Density ratio rho/rho0 (0 index means stagnation condition)

        Code verified!
      */
      double rhor(const double& M);

   private:

      double GM; // Specific heat ratio
};

#endif // ISENTROPICFLOWRELATIONS_H
