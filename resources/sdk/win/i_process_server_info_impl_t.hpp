#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IProcessServerInfoImpl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_process_server_info_impl_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IProcessServerInfoImpl.$", 0x8, true, 0xcd663d491662d28f );
        SDK_FIXED_SIZE( i_process_server_info_impl_t, 0x8 );
    };                                
};
SDK_VERIFY( class win::i_process_server_info_impl_t, 0x8 );
