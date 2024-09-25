#pragma once
#include <sdkgen/support_library.hpp>

namespace tpp
{
    // [struct _TPP_THREAD_DATA_CALLBACK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_data_callback_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_TPP_THREAD_DATA_CALLBACK.$", 0x0, true, 0x2388819846610e10 );
        SDK_FIXED_SIZE( thread_data_callback_t, 0x0 );
    };                           
};
SDK_VERIFY( struct tpp::thread_data_callback_t, 0x0 );
