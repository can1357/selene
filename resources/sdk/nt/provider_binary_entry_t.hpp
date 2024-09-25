#pragma once
#include <sdkgen/support_library.hpp>
#include "cvdd_t.hpp"

#include "magic/provider_binary_entry_t.start.hpp"
namespace nt
{
    // [struct _PROVIDER_BINARY_ENTRY]
    // => Windows 10 v1607
    //
    struct provider_binary_entry_t               
    {                                            
        // Windows 10 v1607                      
        //                                       
        _m00 nt::list_entry_t list_entry;          //{ +0x0000    } | .ListEntry
        _m01 uint8_t          consumers_notified;  //{ +0x0010    } | .ConsumersNotified
        _m02 uint32_t         debug_id_size;       //{ +0x0014    } | .DebugIdSize
        _m03 union nt::cvdd_t debug_id;            //{ +0x0018    } | .DebugId
                                                 
        SDK_MAGIC_PROPERTIES( "_PROVIDER_BINARY_ENTRY.$", 0x0, false, 0x9e9ada7343e8e479 );                   
        SDK_FIXED_SIZE( provider_binary_entry_t, 0x38 );                   
    };                                           
};
#include "magic/provider_binary_entry_t.end.hpp"
SDK_VERIFY( struct nt::provider_binary_entry_t, 0x38 );
