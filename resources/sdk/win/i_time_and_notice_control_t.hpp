#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITimeAndNoticeControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_time_and_notice_control_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "ITimeAndNoticeControl.$", 0x8, true, 0xf8e4ee55ea3bd4c );
        SDK_FIXED_SIZE( i_time_and_notice_control_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_time_and_notice_control_t, 0x8 );
