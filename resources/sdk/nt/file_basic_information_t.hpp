#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_basic_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_basic_information_t    
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  creation_time;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CreationTime
        _m01 int64_t  last_access_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LastAccessTime
        _m02 int64_t  last_write_time;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastWriteTime
        _m03 int64_t  change_time;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ChangeTime
        _m04 uint32_t file_attributes;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FileAttributes
                                       
        SDK_NONVOL_PROPERTIES( "_FILE_BASIC_INFORMATION.$", 0x28, true, 0xc1dddb0a8010a029 );                 
        SDK_FIXED_SIZE( file_basic_information_t, 0x28 );                 
    };                                 
};
#include "magic/file_basic_information_t.end.hpp"
SDK_VERIFY( struct nt::file_basic_information_t, 0x28 );
