/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2013 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */
#ifndef CCPP_ORB_ABSTRACTION_H
#define CCPP_ORB_ABSTRACTION_H
#include "eOrb/CORBA/LocalObject.h"

  namespace DDS
  {
    #define LOCAL_REFCOUNTED_OBJECT virtual CORBA::LocalObject
    #define LOCAL_REFCOUNTED_VALUEBASE
        
    #define THROW_ORB_EXCEPTIONS
    #define THROW_ORB_AND_USER_EXCEPTIONS(...)

    #define THROW_VALUETYPE_ORB_EXCEPTIONS
    #define THROW_VALUETYPE_ORB_AND_USER_EXCEPTIONS(...)
  }
 

#endif /* ORB_ABSTRACTION */
