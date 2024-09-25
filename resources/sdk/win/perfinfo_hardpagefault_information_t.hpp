#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_hardpagefault_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_HARDPAGEFAULT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_hardpagefault_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  read_offset;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadOffset
        _m01 void*    virtual_address;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualAddress
        _m02 void*    file_object;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileObject
        _m03 uint32_t thread_id;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ThreadId
        _m04 uint32_t byte_count;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ByteCount
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_HARDPAGEFAULT_INFORMATION.$", 0x20, true, 0x8341f51bc1153c36 );                
        SDK_FIXED_SIZE( perfinfo_hardpagefault_information_t, 0x20 );                
    };                                         
};
#include "magic/perfinfo_hardpagefault_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_hardpagefault_information_t, 0x20 );
