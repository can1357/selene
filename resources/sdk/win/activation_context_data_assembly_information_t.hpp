#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_assembly_information_t
    {                                                    
                                                         
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION.$", 0x0, true, 0xb7eef2ddc81f417a );
        SDK_FIXED_SIZE( activation_context_data_assembly_information_t, 0x0 );
    };                                                   
};
SDK_VERIFY( struct win::activation_context_data_assembly_information_t, 0x0 );
