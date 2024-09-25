#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_mem_reset_info_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MEM_RESET_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_mem_reset_info_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    base_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t size_in_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeInBytes
        _m02 uint2_t  type_info;      //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .TypeInfo
        _m03 uint32_t flags;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                    
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MEM_RESET_INFO.$", 0x18, true, 0x27c05f680d39c68c );              
        SDK_FIXED_SIZE( perfinfo_mem_reset_info_t, 0x18 );              
    };                              
};
#include "magic/perfinfo_mem_reset_info_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_mem_reset_info_t, 0x18 );
