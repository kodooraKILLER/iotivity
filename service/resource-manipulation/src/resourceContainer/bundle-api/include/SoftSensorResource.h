//******************************************************************
//
// Copyright 2015 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef SOFTSENSORRESOURCE_H_
#define SOFTSENSORRESOURCE_H_

#include "BundleResource.h"

namespace OIC
{
    namespace Service
    {

        /**
        * @class    SoftSensorResource
        * @brief    This class represents bundle resource for Soft Sensor
        *               to be registered in the container and make resource server
        *
        */
        class SoftSensorResource: public BundleResource
        {
            public:
                struct SensorData
                {
                    string sensorName;
                    vector< map< string, string > > data;
                };

                /**
                * Constructor for SoftSensorResource
                */
                SoftSensorResource();

                /**
                * Virtual destructor for SoftSensorResource
                */
                virtual ~SoftSensorResource();

                /**
                * Execute the logic of bundle to get the value of attribute
                *
                * @param attributeName - name of attribute to get
                *
                * @return string - return value of the attribute
                *
                * @todo use type variant mechanism
                */
                virtual string getAttribute(string attributeName) = 0;

                /**
                * Execute the logic of bundle to set the value of attribute
                *
                * @param attributeName - name of attribute to set
                *
                * @param value - value of attribute to set
                *
                * @return void
                */
                virtual void setAttribute(string attributeName, string value) = 0;

                /**
                * Set Input data to update output value of the soft sensor
                *
                * @param inputs - input data which soft sensor needed
                *
                * @return void
                */
                virtual void setInputAttribute(SensorData inputs) = 0;


                unsigned int inputCount;
                vector<string> m_vecInputAttributes;
                map< string, SensorData > m_mapStoredInputData;
                SensorData m_outputs;
        };
    }
}

#endif
