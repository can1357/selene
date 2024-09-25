#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_proc_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_PROC_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_proc_flags_t               
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 uint3_t handle_type;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HandleType
        _m01 uint3_t proc_type;               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ProcType
        _m02 uint2_t is_interpreted;          //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .IsInterpreted
        _m03 uint1_t is_object;               //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IsObject
        _m04 uint1_t is_async;                //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .IsAsync
        _m05 uint1_t is_encode;               //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .IsEncode
        _m06 uint1_t is_decode;               //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .IsDecode
        _m07 uint1_t uses_full_ptr_package;   //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .UsesFullPtrPackage
        _m08 uint1_t uses_rpc_sm_package;     //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .UsesRpcSmPackage
        _m09 uint1_t uses_pipes;              //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .UsesPipes
        _m10 uint2_t handles_exceptions;      //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .HandlesExceptions
        _m11 uint1_t server_must_size;        //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ServerMustSize
        _m12 uint1_t client_must_size;        //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .ClientMustSize
        _m13 uint1_t has_return;              //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .HasReturn
        _m14 uint1_t has_complex_return;      //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .HasComplexReturn
        _m15 uint1_t server_has_correlation;  //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .ServerHasCorrelation
        _m16 uint1_t client_has_correlation;  //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .ClientHasCorrelation
        _m17 uint1_t has_notify;              //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .HasNotify
        _m18 uint1_t has_other_extensions;    //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .HasOtherExtensions
        _m19 uint1_t has_big_by_value_param;  //{ +0x0000@25 +0x0000@25 +0x0000@25 +0x0000@25 } | .HasBigByValueParam
        _m20 uint1_t has_arm_param_layout;    //{ +0x0000@26 +0x0000@26 +0x0000@26 +0x0000@26 } | .HasArmParamLayout
                                            
        SDK_MAGIC_PROPERTIES( "_NDR64_PROC_FLAGS.$", 0x4, true, 0xca1d51dd615edbb3 );                       
        SDK_FIXED_SIZE( ndr64_proc_flags_t, 0x4 );                       
    };                                      
};
#include "magic/ndr64_proc_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_proc_flags_t, 0x4 );
