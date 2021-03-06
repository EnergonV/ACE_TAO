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

#ifndef _TAO_IDL_CCM_HOMESC_M9YRLM_H_
#define _TAO_IDL_CCM_HOMESC_M9YRLM_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "CCM_Stub_Export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "ccm/CCM_HomeC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 3 || TAO_BETA_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CCM_STUB_Export

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:35

namespace Components
{

  // TAO_IDL - Generated from
  // be\be_visitor_sequence\sequence_ch.cpp:99

#if !defined (_COMPONENTS_CCMHOMES_CH_)
#define _COMPONENTS_CCMHOMES_CH_

  class CCMHomes;

  typedef
    ::TAO_VarSeq_Var_T<
        CCMHomes
      >
    CCMHomes_var;

  typedef
    ::TAO_Seq_Out_T<
        CCMHomes
      >
    CCMHomes_out;

  class CCM_STUB_Export CCMHomes
    : public
        ::TAO::unbounded_object_reference_sequence<
            CCMHome,
            CCMHome_var
          >
  {
  public:
    CCMHomes (void);
    CCMHomes ( ::CORBA::ULong max);
    CCMHomes (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      CCMHome_ptr* buffer,
      ::CORBA::Boolean release = false);
    CCMHomes (const CCMHomes &);
    virtual ~CCMHomes (void);
    

    // TAO_IDL - Generated from
    // be\be_type.cpp:304

    
    typedef CCMHomes_var _var_type;
    typedef CCMHomes_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_typecode\typecode_decl.cpp:34

  extern CCM_STUB_Export ::CORBA::TypeCode_ptr const _tc_CCMHomes;

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:64

} // module Components

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Components::CCMHomes>
    : public
        Var_Size_Arg_Traits_T<
            ::Components::CCMHomes,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_sequence\any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Components
{
  CCM_STUB_Export void operator<<= ( ::CORBA::Any &, const ::Components::CCMHomes &); // copying version
  CCM_STUB_Export void operator<<= ( ::CORBA::Any &, ::Components::CCMHomes*); // noncopying version
  CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Components::CCMHomes *&); // deprecated
  CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Components::CCMHomes *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CCM_STUB_Export void operator<<= ( ::CORBA::Any &, const Components::CCMHomes &); // copying version
CCM_STUB_Export void operator<<= ( ::CORBA::Any &, Components::CCMHomes*); // noncopying version
CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Components::CCMHomes *&); // deprecated
CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Components::CCMHomes *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be\be_visitor_sequence\cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Components_CCMHomes_H_
#define _TAO_CDR_OP_Components_CCMHomes_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


CCM_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Components::CCMHomes &_tao_sequence);
CCM_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Components::CCMHomes &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Components_CCMHomes_H_ */

// TAO_IDL - Generated from
// be\be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "CCM_HomesC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

