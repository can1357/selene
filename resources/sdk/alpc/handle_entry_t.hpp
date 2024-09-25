#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_entry_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_HANDLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_entry_t 
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                
        _m00 void* object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
                          
        SDK_MAGIC_PROPERTIES( "_ALPC_HANDLE_ENTRY.$", 0x8, true, 0x813823847429d1e8 );       
        SDK_FIXED_SIZE( handle_entry_t, 0x8 );       
    };                    
};
#include "magic/handle_entry_t.end.hpp"
SDK_VERIFY( struct alpc::handle_entry_t, 0x8 );
