#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_stub_desc_t.start.hpp"
namespace win
{
    struct ndr_expr_desc_t;
    struct ndr_cs_routines_t;
    struct midl_stub_message_t;
    struct comm_fault_offsets_t;
    struct malloc_free_struct_t;
    struct generic_binding_info_t;
    struct xmit_routine_quintuple_t;
    struct generic_binding_routine_pair_t;
    struct user_marshal_routine_quadruple_t;

    // [struct _MIDL_STUB_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_stub_desc_t                                                                                 
    {                                                                                                       
        union u0_implicit_handle_info_t                                                                     
        {                                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
            //                                                                                              
            _m03 void**                              p_auto_handle;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pAutoHandle
            _m04 void**                              p_primitive_handle;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pPrimitiveHandle
            _m05 struct win::generic_binding_info_t* p_generic_binding_info;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pGenericBindingInfo
                                                                                                            
            SDK_MAGIC_PROPERTIES( "_MIDL_STUB_DESC.IMPLICIT_HANDLE_INFO.$", 0x8, true, 0x98569973d9bd2a72 );                                                       
            SDK_FIXED_SIZE( u0_implicit_handle_info_t, 0x8 );                                                       
        };                                                                                                  
                                                                                                            
        using a_generic_binding_routine_pairs_t = const struct win::generic_binding_routine_pair_t*;                                
        using apfn_expr_eval_t =                  sdk::function<void(struct win::midl_stub_message_t*)> const**;                                
        using a_user_marshal_quadruple_t =        const struct win::user_marshal_routine_quadruple_t*;                                
                                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                                  
        _m00 void*                                                          rpc_interface_information;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RpcInterfaceInformation
        _m01 sdk::function<void*(uint64_t)>*                                pfn_allocate;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnAllocate
        _m02 sdk::function<void(void*)>*                                    pfn_free;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnFree
        _m06 u0_implicit_handle_info_t                                      implicit_handle_info;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IMPLICIT_HANDLE_INFO
        _m07 sdk::function<void(void*)> const**                             apfn_ndr_rundown_routines;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .apfnNdrRundownRoutines
        _m08 a_generic_binding_routine_pairs_t                              a_generic_binding_routine_pairs;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .aGenericBindingRoutinePairs
        _m09 apfn_expr_eval_t                                               apfn_expr_eval;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .apfnExprEval
        _m10 const struct win::xmit_routine_quintuple_t*                    a_xmit_quintuple;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .aXmitQuintuple
        _m11 const uint8_t*                                                 p_format_types;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pFormatTypes
        _m12 int32_t                                                        f_check_bounds;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .fCheckBounds
        _m13 uint32_t                                                       version;                          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .Version
        _m14 struct win::malloc_free_struct_t*                              p_malloc_free_struct;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pMallocFreeStruct
        _m15 int32_t                                                        midl_version;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MIDLVersion
        _m16 const struct win::comm_fault_offsets_t*                        comm_fault_offsets;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CommFaultOffsets
        _m17 a_user_marshal_quadruple_t                                     a_user_marshal_quadruple;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .aUserMarshalQuadruple
        _m18 sdk::function<void()> const**                                  notify_routine_table;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NotifyRoutineTable
        _m19 uint64_t                                                       m_flags;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .mFlags
        _m20 const struct win::ndr_cs_routines_t*                           cs_routine_tables;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CsRoutineTables
        _m21 void*                                                          proxy_server_info;                //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ProxyServerInfo
        _m22 const struct win::ndr_expr_desc_t*                             p_expr_info;                      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .pExprInfo
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_MIDL_STUB_DESC.$", 0x98, true, 0xed75b94b8dcd9ec4 );                                
        SDK_FIXED_SIZE( midl_stub_desc_t, 0x98 );                                                           
    };                                                                                                      
};
#include "magic/midl_stub_desc_t.end.hpp"
SDK_VERIFY( union win::midl_stub_desc_t::u0_implicit_handle_info_t, 0x8 );
SDK_VERIFY( struct win::midl_stub_desc_t, 0x98 );
