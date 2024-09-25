#pragma once
#include <sdkgen/support_library.hpp>
#include "sid_t.hpp"

#include "magic/file_get_quota_information_t.start.hpp"
namespace nt
{
    // [struct _FILE_GET_QUOTA_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_get_quota_information_t         
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 uint32_t         next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t         sid_length;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SidLength
        _m02 struct nt::sid_t sid;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Sid
                                                
        SDK_NONVOL_PROPERTIES( "_FILE_GET_QUOTA_INFORMATION.$", 0x14, true, 0xd48f8f1ab3d2b693 );                  
        SDK_FIXED_SIZE( file_get_quota_information_t, 0x14 );                  
    };                                          
};
#include "magic/file_get_quota_information_t.end.hpp"
SDK_VERIFY( struct nt::file_get_quota_information_t, 0x14 );
