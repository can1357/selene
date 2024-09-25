#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_microcode_update_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_MICROCODE_UPDATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_microcode_update_information_t
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t operation;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Operation
                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_MICROCODE_UPDATE_INFORMATION.$", 0x4, true, 0xb75613c8f4d33738 );          
        SDK_FIXED_SIZE( system_processor_microcode_update_information_t, 0x4 );          
    };                                                    
};
#include "magic/system_processor_microcode_update_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_microcode_update_information_t, 0x4 );
