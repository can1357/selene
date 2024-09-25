#pragma once
#include <sdkgen/support_library.hpp>
#include "driver_entry_t.hpp"

#include "magic/driver_entry_list_t.start.hpp"
namespace efi
{
    // [struct _EFI_DRIVER_ENTRY_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_entry_list_t                            
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                
        _m00 uint32_t                   next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 struct efi::driver_entry_t driver_entry;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DriverEntry
                                                          
        SDK_MAGIC_PROPERTIES( "_EFI_DRIVER_ENTRY_LIST.$", 0x18, true, 0xa21eb86f9cf7e83a );                  
        SDK_FIXED_SIZE( driver_entry_list_t, 0x18 );                  
    };                                                    
};
#include "magic/driver_entry_list_t.end.hpp"
SDK_VERIFY( struct efi::driver_entry_list_t, 0x18 );
