#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_alignment_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ALIGNMENT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_alignment_information_t     
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t alignment_requirement;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AlignmentRequirement
                                            
        SDK_NONVOL_PROPERTIES( "_FILE_ALIGNMENT_INFORMATION.$", 0x4, true, 0x1fc9a85df4f42e54 );                      
        SDK_FIXED_SIZE( file_alignment_information_t, 0x4 );                      
    };                                      
};
#include "magic/file_alignment_information_t.end.hpp"
SDK_VERIFY( struct win::file_alignment_information_t, 0x4 );
