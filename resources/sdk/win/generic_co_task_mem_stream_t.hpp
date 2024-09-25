#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class GenericCoTaskMemStream]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class generic_co_task_mem_stream_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "GenericCoTaskMemStream.$", 0x30, true, 0x9466acb674415ccc );
        SDK_FIXED_SIZE( generic_co_task_mem_stream_t, 0x30 );
    };                                
};
SDK_VERIFY( class win::generic_co_task_mem_stream_t, 0x30 );
