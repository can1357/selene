#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_livedump_control_flags_t.start.hpp"
namespace win
{
    // [union _SYSDBG_LIVEDUMP_CONTROL_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union sysdbg_livedump_control_flags_t             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  use_dump_storage_stack;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UseDumpStorageStack
        _m01 uint1_t  compress_memory_pages_data;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CompressMemoryPagesData
        _m02 uint1_t  include_user_space_memory_pages;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IncludeUserSpaceMemoryPages
        _m03 uint1_t  abort_if_memory_pressure;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AbortIfMemoryPressure
        _m04 uint32_t as_ulong;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSDBG_LIVEDUMP_CONTROL_FLAGS.$", 0x4, true, 0xec6718a9c7f7ff93 );                                
        SDK_FIXED_SIZE( sysdbg_livedump_control_flags_t, 0x4 );                                
    };                                                
};
#include "magic/sysdbg_livedump_control_flags_t.end.hpp"
SDK_VERIFY( union win::sysdbg_livedump_control_flags_t, 0x4 );
