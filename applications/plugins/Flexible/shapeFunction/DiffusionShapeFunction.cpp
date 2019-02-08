/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#define FLEXIBLE_DiffusionShapeFunction_CPP

#include <Flexible/config.h>
#include "../shapeFunction/DiffusionShapeFunction.h"
#include <sofa/core/ObjectFactory.h>

namespace sofa
{
namespace component
{
namespace shapefunction
{

using namespace defaulttype;
using namespace core::behavior;

// Register in the Factory
int DiffusionShapeFunctionClass = core::RegisterObject("Computes shape functions based on diffusion in images")

        .add< DiffusionShapeFunction<ShapeFunction3,ImageUC> >()
        .add< DiffusionShapeFunction<ShapeFunction3,ImageD> >(true)
        .add< DiffusionShapeFunction<ShapeFunction3,ImageF> >()
        .add< DiffusionShapeFunction<ShapeFunction3,ImageB> >()
        ;

template class SOFA_Flexible_API DiffusionShapeFunction<ShapeFunction3,ImageUC>;
template class SOFA_Flexible_API DiffusionShapeFunction<ShapeFunction3,ImageD>;
template class SOFA_Flexible_API DiffusionShapeFunction<ShapeFunction3,ImageF>;
template class SOFA_Flexible_API DiffusionShapeFunction<ShapeFunction3,ImageB>;

}
}
}
