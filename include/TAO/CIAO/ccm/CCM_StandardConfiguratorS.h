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
// be\be_codegen.cpp:458

#ifndef _TAO_IDL_CCM_STANDARDCONFIGURATORS_MPY6JW_H_
#define _TAO_IDL_CCM_STANDARDCONFIGURATORS_MPY6JW_H_

#include /**/ "ace/pre.h"

#include "CCM_StandardConfiguratorC.h"
#include "ccm/CCM_ConfiguratorS.h"
#include "ccm/CCM_NavigationS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Any_SArg_Traits.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "CCM_Svnt_Export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CCM_SVNT_Export

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:306

#if !defined (_COMPONENTS_CONFIGVALUE__SARG_TRAITS_)
#define _COMPONENTS_CONFIGVALUE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Components::ConfigValue>
    : public
        Object_SArg_Traits_T<
            ::Components::ConfigValue *,
            ::Components::ConfigValue_var,
            ::Components::ConfigValue_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Components::ConfigValues>
    : public
        Var_Size_SArg_Traits_T<
            ::Components::ConfigValues,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_module\module_sh.cpp:35

namespace POA_Components
{
  

// TAO_IDL - Generated from
// be\be_visitor_module\module_sh.cpp:66

} // module Components

#include /**/ "ace/post.h"

#endif /* ifndef */

