#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _MEDIA_CHANGE_DETECTION_INFO]
    // => WDK 10
    //
    struct media_change_detection_info_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "_MEDIA_CHANGE_DETECTION_INFO.$", 0x0, false, 0x37f6b6ede9e16aa5 );
        SDK_FIXED_SIZE( media_change_detection_info_t, 0x0 );
    };                                  
};
SDK_VERIFY( struct nt::media_change_detection_info_t, 0x0 );
