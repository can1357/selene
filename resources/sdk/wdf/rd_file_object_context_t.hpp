#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct RD_FILE_OBJECT_CONTEXT__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rd_file_object_context_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "RD_FILE_OBJECT_CONTEXT__.$", 0x4, true, 0x4d8aefb7e6695100 );
        SDK_FIXED_SIZE( rd_file_object_context_t, 0x4 );
    };                             
};
SDK_VERIFY( struct wdf::rd_file_object_context_t, 0x4 );
