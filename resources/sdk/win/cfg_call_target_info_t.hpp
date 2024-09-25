#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cfg_call_target_info_t.start.hpp"
namespace win
{
    // [struct _CFG_CALL_TARGET_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cfg_call_target_info_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint64_t offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint64_t flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                 
        SDK_MAGIC_PROPERTIES( "_CFG_CALL_TARGET_INFO.$", 0x10, true, 0xc77f8f9bc11598b3 );       
        SDK_FIXED_SIZE( cfg_call_target_info_t, 0x10 );       
    };                           
};
#include "magic/cfg_call_target_info_t.end.hpp"
SDK_VERIFY( struct win::cfg_call_target_info_t, 0x10 );
