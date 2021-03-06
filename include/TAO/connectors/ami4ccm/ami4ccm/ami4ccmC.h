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

#ifndef _TAO_IDL_AMI4CCMC_XUCOAO_H_
#define _TAO_IDL_AMI4CCMC_XUCOAO_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "ami4ccm_stub_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "ComponentsC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 3 || TAO_BETA_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO AMI4CCM_STUB_Export

// TAO_IDL - Generated from
// be\be_visitor_root\root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:35

namespace CCM_AMI
{

  // TAO_IDL - Generated from
  // be\be_visitor_native\native_ch.cpp:43

  

  // TAO_IDL - Generated from
  // be\be_interface.cpp:748

#if !defined (_CCM_AMI_EXCEPTIONHOLDER__VAR_OUT_CH_)
#define _CCM_AMI_EXCEPTIONHOLDER__VAR_OUT_CH_

  class ExceptionHolder;
  typedef ExceptionHolder *ExceptionHolder_ptr;

  typedef
    TAO_Objref_Var_T<
        ExceptionHolder
      >
    ExceptionHolder_var;
  
  typedef
    TAO_Objref_Out_T<
        ExceptionHolder
      >
    ExceptionHolder_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface\interface_ch.cpp:40

  class AMI4CCM_STUB_Export ExceptionHolder
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // be\be_type.cpp:304

    typedef ExceptionHolder_ptr _ptr_type;
    typedef ExceptionHolder_var _var_type;
    typedef ExceptionHolder_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ExceptionHolder_ptr _duplicate (ExceptionHolder_ptr obj);

    static void _tao_release (ExceptionHolder_ptr obj);

    static ExceptionHolder_ptr _narrow (::CORBA::Object_ptr obj);
    static ExceptionHolder_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ExceptionHolder_ptr _nil (void);

    virtual void raise_exception (
      void) = 0;

    // TAO_IDL - Generated from
    // be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ExceptionHolder (void);

    

    virtual ~ExceptionHolder (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ExceptionHolder (const ExceptionHolder &);

    void operator= (const ExceptionHolder &);
  };

  // TAO_IDL - Generated from
  // be\be_visitor_typecode\typecode_decl.cpp:34

  extern AMI4CCM_STUB_Export ::CORBA::TypeCode_ptr const _tc_ExceptionHolder;

  // TAO_IDL - Generated from
  // be\be_interface.cpp:748

#if !defined (_CCM_AMI_REPLYHANDLER__VAR_OUT_CH_)
#define _CCM_AMI_REPLYHANDLER__VAR_OUT_CH_

  class ReplyHandler;
  typedef ReplyHandler *ReplyHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        ReplyHandler
      >
    ReplyHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        ReplyHandler
      >
    ReplyHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface\interface_ch.cpp:40

  class AMI4CCM_STUB_Export ReplyHandler
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // be\be_type.cpp:304

    typedef ReplyHandler_ptr _ptr_type;
    typedef ReplyHandler_var _var_type;
    typedef ReplyHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ReplyHandler_ptr _duplicate (ReplyHandler_ptr obj);

    static void _tao_release (ReplyHandler_ptr obj);

    static ReplyHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static ReplyHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ReplyHandler_ptr _nil (void);

    // TAO_IDL - Generated from
    // be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    ReplyHandler (void);

    

    virtual ~ReplyHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ReplyHandler (const ReplyHandler &);

    void operator= (const ReplyHandler &);
  };

  // TAO_IDL - Generated from
  // be\be_visitor_typecode\typecode_decl.cpp:34

  extern AMI4CCM_STUB_Export ::CORBA::TypeCode_ptr const _tc_ReplyHandler;

  // TAO_IDL - Generated from
  // be\be_interface.cpp:748

#if !defined (_CCM_AMI_AMI4CCM_BASE__VAR_OUT_CH_)
#define _CCM_AMI_AMI4CCM_BASE__VAR_OUT_CH_

  class AMI4CCM_Base;
  typedef AMI4CCM_Base *AMI4CCM_Base_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI4CCM_Base
      >
    AMI4CCM_Base_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI4CCM_Base
      >
    AMI4CCM_Base_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface\interface_ch.cpp:40

  class AMI4CCM_STUB_Export AMI4CCM_Base
    : public virtual ::Components::CCMObject
  {
  public:
    friend class TAO::Narrow_Utils<AMI4CCM_Base>;

    // TAO_IDL - Generated from
    // be\be_type.cpp:304

    typedef AMI4CCM_Base_ptr _ptr_type;
    typedef AMI4CCM_Base_var _var_type;
    typedef AMI4CCM_Base_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI4CCM_Base_ptr _duplicate (AMI4CCM_Base_ptr obj);

    static AMI4CCM_Base_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI4CCM_Base_ptr _nil (void);

    // TAO_IDL - Generated from
    // be\be_visitor_interface\interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI4CCM_Base (void);

    // Concrete non-local interface only.
    AMI4CCM_Base (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI4CCM_Base (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    friend class _TAO_AMI4CCM_Base_Direct_Proxy_Impl;

    virtual ~AMI4CCM_Base (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI4CCM_Base (const AMI4CCM_Base &);

    void operator= (const AMI4CCM_Base &);
  };

  // TAO_IDL - Generated from
  // be\be_visitor_typecode\typecode_decl.cpp:34

  extern AMI4CCM_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI4CCM_Base;

// TAO_IDL - Generated from
// be\be_visitor_module\module_ch.cpp:64

} // module CCM_AMI

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be\be_visitor_arg_traits.cpp:145

#if !defined (_CCM_AMI_AMI4CCM_BASE__ARG_TRAITS_)
#define _CCM_AMI_AMI4CCM_BASE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::CCM_AMI::AMI4CCM_Base>
    : public
        Object_Arg_Traits_T<
            ::CCM_AMI::AMI4CCM_Base_ptr,
            ::CCM_AMI::AMI4CCM_Base_var,
            ::CCM_AMI::AMI4CCM_Base_out,
            TAO::Objref_Traits<CCM_AMI::AMI4CCM_Base>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CCM_AMI_EXCEPTIONHOLDER__TRAITS_)
#define _CCM_AMI_EXCEPTIONHOLDER__TRAITS_

  template<>
  struct AMI4CCM_STUB_Export Objref_Traits< ::CCM_AMI::ExceptionHolder>
  {
    static ::CCM_AMI::ExceptionHolder_ptr duplicate (
        ::CCM_AMI::ExceptionHolder_ptr p);
    static void release (
        ::CCM_AMI::ExceptionHolder_ptr p);
    static ::CCM_AMI::ExceptionHolder_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CCM_AMI::ExceptionHolder_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CCM_AMI_REPLYHANDLER__TRAITS_)
#define _CCM_AMI_REPLYHANDLER__TRAITS_

  template<>
  struct AMI4CCM_STUB_Export Objref_Traits< ::CCM_AMI::ReplyHandler>
  {
    static ::CCM_AMI::ReplyHandler_ptr duplicate (
        ::CCM_AMI::ReplyHandler_ptr p);
    static void release (
        ::CCM_AMI::ReplyHandler_ptr p);
    static ::CCM_AMI::ReplyHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CCM_AMI::ReplyHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CCM_AMI_AMI4CCM_BASE__TRAITS_)
#define _CCM_AMI_AMI4CCM_BASE__TRAITS_

  template<>
  struct AMI4CCM_STUB_Export Objref_Traits< ::CCM_AMI::AMI4CCM_Base>
  {
    static ::CCM_AMI::AMI4CCM_Base_ptr duplicate (
        ::CCM_AMI::AMI4CCM_Base_ptr p);
    static void release (
        ::CCM_AMI::AMI4CCM_Base_ptr p);
    static ::CCM_AMI::AMI4CCM_Base_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CCM_AMI::AMI4CCM_Base_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CCM_AMI
{
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, ExceptionHolder_ptr); // copying
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, ExceptionHolder_ptr *); // non-copying
  AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ExceptionHolder_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::ExceptionHolder_ptr); // copying
AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::ExceptionHolder_ptr *); // non-copying
AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CCM_AMI::ExceptionHolder_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CCM_AMI
{
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, ReplyHandler_ptr); // copying
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, ReplyHandler_ptr *); // non-copying
  AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ReplyHandler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::ReplyHandler_ptr); // copying
AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::ReplyHandler_ptr *); // non-copying
AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CCM_AMI::ReplyHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CCM_AMI
{
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, AMI4CCM_Base_ptr); // copying
  AMI4CCM_STUB_Export void operator<<= ( ::CORBA::Any &, AMI4CCM_Base_ptr *); // non-copying
  AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI4CCM_Base_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::AMI4CCM_Base_ptr); // copying
AMI4CCM_STUB_Export void operator<<= (::CORBA::Any &, CCM_AMI::AMI4CCM_Base_ptr *); // non-copying
AMI4CCM_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CCM_AMI::AMI4CCM_Base_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be\be_visitor_interface\cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

AMI4CCM_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CCM_AMI::AMI4CCM_Base_ptr );
AMI4CCM_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CCM_AMI::AMI4CCM_Base_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "ami4ccmC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

