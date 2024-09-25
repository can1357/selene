#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PROCESS_ATTRIBUTE_LIST]
    // => WDK 10
    //
    struct process_attribute_list_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_PROCESS_ATTRIBUTE_LIST.$", 0x0, false, 0xe3be4bcbdf6605f );
        SDK_FIXED_SIZE( process_attribute_list_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::process_attribute_list_t, 0x0 );
