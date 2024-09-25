#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arc_disk_information_t.start.hpp"
namespace nt
{
    // [struct _ARC_DISK_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arc_disk_information_t             
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::list_entry_t disk_signatures;  //{ +0x0000    +0x0000    +0x0000    } | .DiskSignatures
                                              
        SDK_MAGIC_PROPERTIES( "_ARC_DISK_INFORMATION.$", 0x10, true, 0x85a4d58154d4bc6b );                
        SDK_FIXED_SIZE( arc_disk_information_t, 0x10 );                
    };                                        
};
#include "magic/arc_disk_information_t.end.hpp"
SDK_VERIFY( struct nt::arc_disk_information_t, 0x10 );
