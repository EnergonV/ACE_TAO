// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.3.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be\be_codegen.cpp:1026

#ifndef CIAO_SESSION_AMI4CCM_SVNT_TGAXVL_H_
#define CIAO_SESSION_AMI4CCM_SVNT_TGAXVL_H_

#include /**/ "ace/pre.h"

#include /**/ "ami4ccm_svnt_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "connectors/ami4ccm/ami4ccm/ami4ccm_svnt.h"
#include "ami4ccm_svnt_T.h"

#include "ciao/Containers/Session/Session_ContainerC.h"
#include "ciao/Contexts/Session/Session_Context_T.h"
#include "ciao/Servants/Session/Servant_Impl_T.h"
#include "ciao/Servants/Home_Servant_Impl_T.h"
#include "ciao/Servants/Facet_Servant_Base_T.h"

#include "ami4ccmS.h"

namespace CIAO_CCM_AMI_AMI4CCM_Base_Impl
{

  class AMI4CCM_SVNT_Export AMI4CCM_Base_Servant
    : public virtual
        ::CIAO::Session_Servant_Impl_T<
          ::POA_CCM_AMI::AMI4CCM_Base,
          ::CCM_AMI::CCM_AMI4CCM_Base,
          AMI4CCM_Base_Context_T< 
            ::CIAO::Session_Container, ::CIAO::Session_Context_Impl_T< 
              ::CCM_AMI::CCM_AMI4CCM_Base_Context, 
              ::CCM_AMI::AMI4CCM_Base> > >
  {
  public:
    typedef ::CCM_AMI::CCM_AMI4CCM_Base _exec_type;
    
    AMI4CCM_Base_Servant (
      ::CCM_AMI::CCM_AMI4CCM_Base_ptr executor,
      ::Components::CCMHome_ptr h,
      const char * ins_name,
      ::CIAO::Home_Servant_Impl_Base *hs,
      ::CIAO::Session_Container_ptr c);
    
    virtual ~AMI4CCM_Base_Servant (void);
    
    /// Supported operations and attributes.

    // Base class overrides.
  
  public:
  };

  extern "C" AMI4CCM_SVNT_Export ::PortableServer::Servant
  create_CCM_AMI_AMI4CCM_Base_Servant (
    ::Components::EnterpriseComponent_ptr p,
    ::CIAO::Session_Container_ptr c,
    const char * ins_name);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
