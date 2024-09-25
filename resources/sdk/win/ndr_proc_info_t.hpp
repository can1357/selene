#pragma once
#include <sdkgen/support_library.hpp>
#include "interpreter_flags_t.hpp"

#include "magic/ndr_proc_info_t.start.hpp"
namespace win
{
    struct ndr_proc_desc_t;

    // [struct _NDR_PROC_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_proc_info_t                                     
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 struct win::interpreter_flags_t interpreter_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterpreterFlags
        _m01 struct win::ndr_proc_desc_t*    p_proc_desc;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pProcDesc
                                                               
        SDK_MAGIC_PROPERTIES( "_NDR_PROC_INFO.$", 0x10, true, 0xc60516fe2f05b1de );                  
        SDK_FIXED_SIZE( ndr_proc_info_t, 0x10 );                  
    };                                                         
};
#include "magic/ndr_proc_info_t.end.hpp"
SDK_VERIFY( struct win::ndr_proc_info_t, 0x10 );
