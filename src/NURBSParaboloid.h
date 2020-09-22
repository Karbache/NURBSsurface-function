#ifndef OPENSIM_NURBSPARABOLOID_H_
#define OPENSIM_NURBSPARABOLOID_H_
/* -------------------------------------------------------------------------- *
 *                              OpenSim:  NURBSParaboloid.h                        *
 * -------------------------------------------------------------------------- *
 * The OpenSim API is a toolkit for musculoskeletal modeling and simulation.  *
 * See http://opensim.stanford.edu and the NOTICE file for more information.  *
 * OpenSim is developed at Stanford University and supported by the US        *
 * National Institutes of Health (U54 GM072970, R24 HD065690) and by DARPA    *
 * through the Warrior Web program.                                           *
 *                                                                            *
 * Copyright (c) 2005-2017 Stanford University and the Authors                *
 * Author(s): Abdelkader Karbache                                             *
 *                                                                            *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may    *
 * not use this file except in compliance with the License. You may obtain a  *
 * copy of the License at http://www.apache.org/licenses/LICENSE-2.0.         *
 *                                                                            *
 * Unless required by applicable law or agreed to in writing, software        *
 * distributed under the License is distributed on an "AS IS" BASIS,          *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
 * See the License for the specific language governing permissions and        *
 * limitations under the License.                                             *
 * -------------------------------------------------------------------------- */


 // INCLUDES
#include <string>
#include "tinynurbs/tinynurbs.h"
#include "glm/glm.hpp"
#include "OpenSim/Common/Function.h"
#include "OpenSim/Common/FunctionAdapter.h"

//#include "check.h"
//#include "evaluate.h"




using namespace OpenSim;
using namespace std;


namespace OpenSim {

	//=============================================================================
	//=============================================================================

	/*
	 */
	class OSIMPLUGIN_API NURBSParaboloid : public Function {
		OpenSim_DECLARE_CONCRETE_OBJECT(NURBSParaboloid, Function);
	protected:
		//==============================================================================
		// PROPERTIES
		//==============================================================================


		//=============================================================================
		// METHODS
		//=============================================================================
	public:
		//Default construct, copy and assignment
		NURBSParaboloid() {
			constructProperties();
		}

		// Convenience Constructor
		NURBSParaboloid() : NURBSParaboloid()
		{
			tinynurbs::Surface<float> srf;
			srf.degree_u = 3;
			srf.degree_v = 3;
			srf.knots_u = { 0.0,
				 0.0,
				 0.0,
				 0.0,
				 0.2989344577023897,
				 0.3944445079649006,
				 0.4618779828334846,
				 0.5,
				 0.5381220171665154,
				 0.6055554920350994,
				 0.7010655422976103,
				 1.0,
				 1.0,
				 1.0,
				 1.0};
			srf.knots_v = {0.0,
				 0.0,
				 0.0,
				 0.0,
				 0.2997453378770301,
				 0.39552329228329297,
				 0.4626581141738427,
				 0.49994937906301185,
				 0.5366973577249404,
				 0.6038659269068156,
				 0.699677628604404,
				 1.0,
				 1.0,
				 1.0,
				 1.0};
			srf.control_points = { 11, 11, {
				glm::vec3(-5  , -5  , 50),
				glm::vec3(-5  , -4  , 41),
				glm::vec3(-5  , -3  , 40),
				glm::vec3(-5  , -2  , 29),
				glm::vec3(-5  , -1  , 26),
				glm::vec3(-5  , 0  , 25),
				glm::vec3(-5  , 1  , 26),
				glm::vec3(-5  , 2  , 29),
				glm::vec3(-5  , 3  , 40),
				glm::vec3(-5  , 4  , 41),
				glm::vec3(-5  , 5  , 50),
				glm::vec3(-4  , -5  , 41),
				glm::vec3(-4  , -4  , 32),
				glm::vec3(-4  , -3  , 25),
				glm::vec3(-4  , -2  , 20),
				glm::vec3(-4  , -1  , 17),
				glm::vec3(-4  , 0  , 16),
				glm::vec3(-4  , 1  , 17),
				glm::vec3(-4  , 2  , 20),
				glm::vec3(-4  , 3  , 25),
				glm::vec3(-4  , 4  , 32),
				glm::vec3(-4  , 5  , 41),
				glm::vec3(-3  , -5  , 40),
				glm::vec3(-3  , -4  , 25),
				glm::vec3(-3  , -3  , 18),
				glm::vec3(-3  , -2  , 13),
				glm::vec3(-3  , -1  , 10),
				glm::vec3(-3  , 0  , 9),
				glm::vec3(-3  , 1  , 10),
				glm::vec3(-3  , 2  , 13),
				glm::vec3(-3  , 3  , 18),
				glm::vec3(-3  , 4  , 25),
				glm::vec3(-3  , 5  , 40),
				glm::vec3(-2  , -5  , 29),
				glm::vec3(-2  , -4  , 20),
				glm::vec3(-2  , -3  , 13),
				glm::vec3(-2  , -2  , 8),
				glm::vec3(-2  , -1  , 5),
				glm::vec3(-2  , 0  , 4),
				glm::vec3(-2  , 1  , 5),
				glm::vec3(-2  , 2  , 8),
				glm::vec3(-2  , 3  , 13),
				glm::vec3(-2  , 4  , 20),
				glm::vec3(-2  , 5  , 29),
				glm::vec3(-1  , -5  , 26),
				glm::vec3(-1  , -4  , 17),
				glm::vec3(-1  , -3  , 10),
				glm::vec3(-1  , -2  , 5),
				glm::vec3(-1  , -1  , 2),
				glm::vec3(-1  , 0  , 1),
				glm::vec3(-1  , 1  , 2),
				glm::vec3(-1  , 2  , 5),
				glm::vec3(-1  , 3  , 10),
				glm::vec3(-1  , 4  , 17),
				glm::vec3(-1  , 5  , 26),
				glm::vec3(0  , -5  , 25),
				glm::vec3(0  , -4  , 16),
				glm::vec3(0  , -3  , 9),
				glm::vec3(0  , -2  , 4),
				glm::vec3(0  , -1  , 1),
				glm::vec3(0  , 0  , 0),
				glm::vec3(0  , 1  , 1),
				glm::vec3(0  , 2  , 3),
				glm::vec3(0  , 3  , 9),
				glm::vec3(0  , 4  , 16),
				glm::vec3(0  , 5  , 25),
				glm::vec3(1  , -5  , 26),
				glm::vec3(1  , -4  , 17),
				glm::vec3(1  , -3  , 10),
				glm::vec3(1  , -2  , 5),
				glm::vec3(1  , -1  , 2),
				glm::vec3(1  , 0  , 1),
				glm::vec3(1  , 1  , 2),
				glm::vec3(1  , 2  , 5),
				glm::vec3(1  , 3  , 10),
				glm::vec3(1  , 4  , 17),
				glm::vec3(1  , 5  , 26),
				glm::vec3(2  , -5  , 29),
				glm::vec3(2  , -4  , 20),
				glm::vec3(2  , -3  , 13),
				glm::vec3(2  , -2  , 8),
				glm::vec3(2  , -1  , 5),
				glm::vec3(2  , 0  , 4),
				glm::vec3(2  , 1  , 5),
				glm::vec3(2  , 2  , 8),
				glm::vec3(2  , 3  , 13),
				glm::vec3(2  , 4  , 20),
				glm::vec3(2  , 5  , 29),
				glm::vec3(3  , -5  , 40),
				glm::vec3(3  , -4  , 25),
				glm::vec3(3  , -3  , 18),
				glm::vec3(3  , -2  , 13),
				glm::vec3(3  , -1  , 10),
				glm::vec3(3  , 0  , 9),
				glm::vec3(3  , 1  , 10),
				glm::vec3(3  , 2  , 13),
				glm::vec3(3  , 3  , 18),
				glm::vec3(3  , 4  , 25),
				glm::vec3(3  , 5  , 40),
				glm::vec3(4  , -5  , 41),
				glm::vec3(4  , -4  , 32),
				glm::vec3(4  , -3  , 25),
				glm::vec3(4  , -2  , 20),
				glm::vec3(4  , -1  , 17),
				glm::vec3(4  , 0  , 16),
				glm::vec3(4  , 1  , 17),
				glm::vec3(4  , 2  , 20),
				glm::vec3(4  , 3  , 25),
				glm::vec3(4  , 4  , 32),
				glm::vec3(4  , 5  , 41),
				glm::vec3(5  , -5  , 50),
				glm::vec3(5  , -4  , 41),
				glm::vec3(5  , -3  , 40),
				glm::vec3(5  , -2  , 29),
				glm::vec3(5  , -1  , 26),
				glm::vec3(5  , 0  , 25),
				glm::vec3(5  , 1  , 26),
				glm::vec3(5  , 2  , 29),
				glm::vec3(5  , 3  , 40),
				glm::vec3(5  , 4  , 41),
				glm::vec3(5,   5,  50)



				}

			}

		};
			virtual ~NURBSParaboloid() {};

			//--------------------------------------------------------------------------
			// EVALUATION
			//--------------------------------------------------------------------------
			double calcValue(const SimTK::Vector& x) const override {
				return (tinynurbs::surfacePoint(srf, glm:vec3(x[0], x[1])));
			}

			double calcDerivative(const std::vector<int>& derivComponents,
				const SimTK::Vector& x) const override {
				int n = (int)derivComponents.size();
				if (n == 0) {
					return calcValue(x);
				}
				if (n > 0) { 
					int partial = derivComponents[0];
					

					array2<glm::vec<3, T>> derivs = tinynurbs::surfaceDerivatives(srf, n, x[0], x[1]);
					return (derivs(x[0], x[1])[partial]);
				}

				else {
					return 0;
				}
			}

			SimTK::Function* createSimTKFunction() const override {
				return new FunctionAdapter(*this);
			}

			int getArgumentSize() const override { return 4; }
			int getMaxDerivativeOrder() const override { return 3; }

		private:
			void constructProperties() {
			}
			//=============================================================================
		};  // END class NURBSParaboloid
		//=============================================================================
		//=============================================================================

	} // end of namespace OpenSim


#endif  // OPENSIM_NURBSPARABOLOID_H_
