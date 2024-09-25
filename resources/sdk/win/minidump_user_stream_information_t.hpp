#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_user_stream_information_t.start.hpp"
namespace win
{
    struct minidump_user_stream_t;

    // [struct _MINIDUMP_USER_STREAM_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_user_stream_information_t                      
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 uint32_t                            user_stream_count;  //{ +0x0000    +0x0000    +0x0000    } | .UserStreamCount
        _m01 struct win::minidump_user_stream_t* user_stream_array;  //{ +0x0004    +0x0004    +0x0004    } | .UserStreamArray
                                                                   
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_USER_STREAM_INFORMATION.$", 0xc, true, 0x733ae74beec29e1e );                  
        SDK_FIXED_SIZE( minidump_user_stream_information_t, 0xc );                  
    };                                                             
};
#include "magic/minidump_user_stream_information_t.end.hpp"
SDK_VERIFY( struct win::minidump_user_stream_information_t, 0xc );
