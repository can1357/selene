#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_handle_tags_information_t.start.hpp"
namespace win
{
    // [struct _KEY_HANDLE_TAGS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_handle_tags_information_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t handle_tags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HandleTags
                                        
        SDK_MAGIC_PROPERTIES( "_KEY_HANDLE_TAGS_INFORMATION.$", 0x4, true, 0xb24ab583347457e0 );            
        SDK_FIXED_SIZE( key_handle_tags_information_t, 0x4 );            
    };                                  
};
#include "magic/key_handle_tags_information_t.end.hpp"
SDK_VERIFY( struct win::key_handle_tags_information_t, 0x4 );
