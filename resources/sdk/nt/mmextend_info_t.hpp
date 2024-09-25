#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmextend_info_t.start.hpp"
namespace nt
{
    // [struct _MMEXTEND_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmextend_info_t            
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t committed_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommittedSize
        _m01 uint32_t reference_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReferenceCount
                                      
        SDK_MAGIC_PROPERTIES( "_MMEXTEND_INFO.$", 0x10, true, 0x6d8ca665b95957ad );                
        SDK_FIXED_SIZE( mmextend_info_t, 0x10 );                
    };                                
};
#include "magic/mmextend_info_t.end.hpp"
SDK_VERIFY( struct nt::mmextend_info_t, 0x10 );
