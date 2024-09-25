#pragma once
#include <sdkgen/support_library.hpp>
#include "interpreter_opt_flags2_t.hpp"

#include "magic/ndr_proc_header_exts_t.start.hpp"
namespace win
{
    // [struct NDR_PROC_HEADER_EXTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_proc_header_exts_t                                  
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                         
        _m00 uint8_t                              size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::interpreter_opt_flags2_t flags2;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags2
        _m02 uint16_t                             client_corr_hint;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ClientCorrHint
        _m03 uint16_t                             server_corr_hint;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ServerCorrHint
        _m04 uint16_t                             notify_index;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NotifyIndex
                                                                   
        SDK_MAGIC_PROPERTIES( "NDR_PROC_HEADER_EXTS.$", 0x8, true, 0xd0df73c5f8d99383 );                 
        SDK_FIXED_SIZE( ndr_proc_header_exts_t, 0x8 );                 
    };                                                             
};
#include "magic/ndr_proc_header_exts_t.end.hpp"
SDK_VERIFY( struct win::ndr_proc_header_exts_t, 0x8 );
