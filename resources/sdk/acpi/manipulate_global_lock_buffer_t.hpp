#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manipulate_global_lock_buffer_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER]
    // => WDK 10 (NV)
    //
    struct manipulate_global_lock_buffer_t
    {                                     
        // WDK 10                 
        //                        
        _m00 uint32_t signature;            //{ +0x0000    } | .Signature
        _m01 void*    lock_object;          //{ +0x0008    } | .LockObject
                                          
        SDK_NONVOL_PROPERTIES( "_ACPI_MANIPULATE_GLOBAL_LOCK_BUFFER.$", 0x0, false, 0x59485326384e09e2 );            
        SDK_FIXED_SIZE( manipulate_global_lock_buffer_t, 0x10 );            
    };                                    
};
#include "magic/manipulate_global_lock_buffer_t.end.hpp"
SDK_VERIFY( struct acpi::manipulate_global_lock_buffer_t, 0x10 );
