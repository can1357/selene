#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_fault_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_FAULT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_fault_information_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t fault_flags;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FaultFlags
        _m01 uint32_t additional_info;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AdditionalInfo
                                      
        SDK_MAGIC_PROPERTIES( "_PROCESS_FAULT_INFORMATION.$", 0x8, true, 0x827af5962831366e );                
        SDK_FIXED_SIZE( process_fault_information_t, 0x8 );                
    };                                
};
#include "magic/process_fault_information_t.end.hpp"
SDK_VERIFY( struct win::process_fault_information_t, 0x8 );
