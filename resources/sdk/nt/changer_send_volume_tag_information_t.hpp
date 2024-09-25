#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_SEND_VOLUME_TAG_INFORMATION]
    // => WDK 10
    //
    struct changer_send_volume_tag_information_t
    {                                           
                                                
        SDK_MAGIC_PROPERTIES( "_CHANGER_SEND_VOLUME_TAG_INFORMATION.$", 0x0, false, 0x4aaeebf9b1927db9 );
        SDK_FIXED_SIZE( changer_send_volume_tag_information_t, 0x0 );
    };                                          
};
SDK_VERIFY( struct nt::changer_send_volume_tag_information_t, 0x0 );
