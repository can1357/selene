#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_combine_information_ex2_t.start.hpp"
namespace win
{
    // [struct _MEMORY_COMBINE_INFORMATION_EX2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_combine_information_ex2_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    handle;                //{ +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint64_t pages_combined;        //{ +0x0008    +0x0008    +0x0008    } | .PagesCombined
        _m02 uint32_t flags;                 //{ +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 void*    process_handle;        //{ +0x0018    +0x0018    +0x0018    } | .ProcessHandle
                                           
        SDK_MAGIC_PROPERTIES( "_MEMORY_COMBINE_INFORMATION_EX2.$", 0x20, true, 0xc24e9df95f1661eb );               
        SDK_FIXED_SIZE( memory_combine_information_ex2_t, 0x20 );               
    };                                     
};
#include "magic/memory_combine_information_ex2_t.end.hpp"
SDK_VERIFY( struct win::memory_combine_information_ex2_t, 0x20 );
