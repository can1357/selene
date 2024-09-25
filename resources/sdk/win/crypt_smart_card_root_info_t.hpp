#pragma once
#include <sdkgen/support_library.hpp>
#include "root_info_luid_t.hpp"

#include "magic/crypt_smart_card_root_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_SMART_CARD_ROOT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_smart_card_root_info_t               
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 sdk::array<uint8_t, 16>      rgb_card_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rgbCardID
        _m01 struct win::root_info_luid_t luid;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .luid
                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_SMART_CARD_ROOT_INFO.$", 0x18, true, 0x111736771ecbbe4a );            
        SDK_FIXED_SIZE( crypt_smart_card_root_info_t, 0x18 );            
    };                                                
};
#include "magic/crypt_smart_card_root_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_smart_card_root_info_t, 0x18 );
