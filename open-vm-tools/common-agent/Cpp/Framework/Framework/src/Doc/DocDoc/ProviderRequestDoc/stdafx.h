/*
 *  Author: bwilliams
 *  Created: February 25, 2016
 *
 *  Copyright (c) 2016 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 */

#ifndef STDAFX_H_
#define STDAFX_H_

#ifdef WIN32
   #define PROVIDERREQUESTDOC_LINKAGE __declspec(dllexport)
#else
   #define PROVIDERREQUESTDOC_LINKAGE
#endif

#include <CommonDefines.h>

#endif /* STDAFX_H_ */