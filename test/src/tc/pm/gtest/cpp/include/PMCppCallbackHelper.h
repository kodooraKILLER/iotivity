/******************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      LICENSE-2.0" target="_blank">http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 ******************************************************************/

#ifndef PMCppCallbackHelper_H_
#define PMCppCallbackHelper_H_

#include "PMCppUtilityHelper.h"

class PMCppCallbackHelper
{
public:

    static int s_isCBInvoked;

    PMCppCallbackHelper();

    static void callbackWrapper(PMResultList_t *result, int hasError);

    static void provisionGetCB(PMResultList_t *result, int hasError);

    static void provisionPutCB(PMResultList_t *result, int hasError);

    static void provisionPostCB(PMResultList_t *result, int hasError);

    static void provisionDeleteCB(PMResultList_t *result, int hasError);

};

#endif
