#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _VOLUME_GET_GPT_ATTRIBUTES_INFORMATION]
    // => WDK 10
    //
    struct volume_get_gpt_attributes_information_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "_VOLUME_GET_GPT_ATTRIBUTES_INFORMATION.$", 0x0, false, 0xbdfdf72c925b7dfe );
        SDK_FIXED_SIZE( volume_get_gpt_attributes_information_t, 0x0 );
    };                                            
};
SDK_VERIFY( struct nt::volume_get_gpt_attributes_information_t, 0x0 );
