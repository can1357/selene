#pragma once
#include <sdkgen/support_library.hpp>
#include "arm_params_t.hpp"
#include "interpreter_opt_flags2_t.hpp"

#include "magic/ndr_proc_header_exts_arm_t.start.hpp"
namespace win
{
    // [struct NDR_PROC_HEADER_EXTS_ARM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_proc_header_exts_arm_t                              
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                         
        _m00 uint8_t                              size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::interpreter_opt_flags2_t flags2;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags2
        _m02 uint16_t                             client_corr_hint;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ClientCorrHint
        _m03 uint16_t                             server_corr_hint;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ServerCorrHint
        _m04 uint16_t                             notify_index;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NotifyIndex
        _m05 struct win::arm_params_t             param_layout;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ParamLayout
                                                                   
        SDK_MAGIC_PROPERTIES( "NDR_PROC_HEADER_EXTS_ARM.$", 0xc, true, 0x45a5de0ebf05fcc5 );                 
        SDK_FIXED_SIZE( ndr_proc_header_exts_arm_t, 0xc );                 
    };                                                             
};
#include "magic/ndr_proc_header_exts_arm_t.end.hpp"
SDK_VERIFY( struct win::ndr_proc_header_exts_arm_t, 0xc );
