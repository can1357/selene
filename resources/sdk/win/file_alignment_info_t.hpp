#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_alignment_info_t.start.hpp"
namespace win
{
    // [struct _FILE_ALIGNMENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_alignment_info_t            
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t alignment_requirement;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AlignmentRequirement
                                            
        SDK_MAGIC_PROPERTIES( "_FILE_ALIGNMENT_INFO.$", 0x4, true, 0x554400ae298d95d );                      
        SDK_FIXED_SIZE( file_alignment_info_t, 0x4 );                      
    };                                      
};
#include "magic/file_alignment_info_t.end.hpp"
SDK_VERIFY( struct win::file_alignment_info_t, 0x4 );
