#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32_find_stream_data_t.start.hpp"
namespace win
{
    // [struct _WIN32_FIND_STREAM_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_find_stream_data_t                 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 int64_t                  stream_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamSize
        _m01 sdk::array<wchar_t, 296> c_stream_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cStreamName
                                                    
        SDK_MAGIC_PROPERTIES( "_WIN32_FIND_STREAM_DATA.$", 0x258, true, 0xc950a90d7d45ca60 );              
        SDK_FIXED_SIZE( win32_find_stream_data_t, 0x258 );              
    };                                              
};
#include "magic/win32_find_stream_data_t.end.hpp"
SDK_VERIFY( struct win::win32_find_stream_data_t, 0x258 );
