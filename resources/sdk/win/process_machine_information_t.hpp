#pragma once
#include <sdkgen/support_library.hpp>
#include "machine_attributes_t.hpp"

#include "magic/process_machine_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MACHINE_INFORMATION]
    // => Windows 11
    //
    struct process_machine_information_t                       
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 uint16_t                       process_machine;     //{ +0x0000    } | .ProcessMachine
        _m01 uint16_t                       res0;                //{ +0x0002    } | .Res0
        _m02 enum win::machine_attributes_t machine_attributes;  //{ +0x0004    } | .MachineAttributes
                                                               
        SDK_MAGIC_PROPERTIES( "_PROCESS_MACHINE_INFORMATION.$", 0x0, false, 0x89080f12eda65592 );                   
        SDK_FIXED_SIZE( process_machine_information_t, 0x8 );                   
    };                                                         
};
#include "magic/process_machine_information_t.end.hpp"
SDK_VERIFY( struct win::process_machine_information_t, 0x8 );
