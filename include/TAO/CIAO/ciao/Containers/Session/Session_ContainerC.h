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
// be\be_codegen.cpp:149

#ifndef _TAO_IDL_SESSION_CONTAINERC_SI3CJ1_H_
#define _TAO_IDL_SESSION_CONTAINERC_SI3CJ1_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "Session_Container_stub_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "ciao/Containers/Container_BaseC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 3 || TAO_BETA_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO SESSION_CONTAINER_STUB_Export

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:35

namespace CIAO
{

  // TAO_IDL - Generated from
  // be\be_interface.cpp:748

#if !defined (_CIAO_SESSION_CONTAINER__VAR_OUT_CH_)
#define _CIAO_SESSION_CONTAINER__VAR_OUT_CH_

  class Session_Container;
  typedef Session_Container *Session_Container_ptr;

  typedef
    TAO_Objref_Var_T<
        Session_Container
      >
    Session_Container_var;
  
  typedef
    TAO_Objref_Out_T<
        Session_Container
      >
    Session_Container_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface\interface_ch.cpp:40

  class SESSION_CONTAINER_STUB_Export Session_Container
    : public virtual ::CIAO::Container
  
  {
  public:

    // TAO_IDL - Generated from
    // be\be_type.cpp:304

    typedef Session_Container_ptr _ptr_type;
    typedef Session_Container_var _var_type;
    typedef Session_Container_out _out_type;

    // The static operations.
    static Session_Container_ptr _duplicate (Session_Container_ptr obj);

    static void _tao_release (Session_Container_ptr obj);

    static Session_Container_ptr _narrow (::CORBA::Object_ptr obj);
    static Session_Container_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Session_Container_ptr _nil (void);

    // TAO_IDL - Generated from
    // be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Session_Container (void);

    

    virtual ~Session_Container (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Session_Container (const Session_Container &);

    void operator= (const Session_Container &);
  };

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:64

} // module CIAO

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CIAO_SESSION_CONTAINER__TRAITS_)
#define _CIAO_SESSION_CONTAINER__TRAITS_

  template<>
  struct SESSION_CONTAINER_STUB_Export Objref_Traits< ::CIAO::Session_Container>
  {
    static ::CIAO::Session_Container_ptr duplicate (
        ::CIAO::Session_Container_ptr p);
    static void release (
        ::CIAO::Session_Container_ptr p);
    static ::CIAO::Session_Container_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CIAO::Session_Container_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1700
#include /**/ "ace/post.h"

#endif /* ifndef */

