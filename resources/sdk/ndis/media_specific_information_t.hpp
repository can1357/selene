#pragma once
#include <sdkgen/support_library.hpp>
#include "class_id_t.hpp"

#include "magic/media_specific_information_t.start.hpp"
namespace ndis
{
    // [struct _MEDIA_SPECIFIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct media_specific_information_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 enum ndis::class_id_t  class_id;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ClassId
        _m02 uint32_t               size;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 sdk::array<uint8_t, 1> class_information;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClassInformation
                                                      
        SDK_MAGIC_PROPERTIES( "_MEDIA_SPECIFIC_INFORMATION.$", 0x10, true, 0xb9763bfd370f8c17 );                  
        SDK_FIXED_SIZE( media_specific_information_t, 0x10 );                  
    };                                                
};
#include "magic/media_specific_information_t.end.hpp"
SDK_VERIFY( struct ndis::media_specific_information_t, 0x10 );
