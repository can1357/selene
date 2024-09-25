#pragma once
#include <sdkgen/support_library.hpp>
#include "sms_flag_t.hpp"

#include "magic/sms_filter_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_SMS_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sms_filter_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                       
        _m00 enum wwan::sms_flag_t flag;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flag
        _m01 uint32_t              message_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageIndex
                                                 
        SDK_MAGIC_PROPERTIES( "_WWAN_SMS_FILTER.$", 0x8, true, 0x93d42dfe75415b4a );              
        SDK_FIXED_SIZE( sms_filter_t, 0x8 );              
    };                                           
};
#include "magic/sms_filter_t.end.hpp"
SDK_VERIFY( struct wwan::sms_filter_t, 0x8 );
