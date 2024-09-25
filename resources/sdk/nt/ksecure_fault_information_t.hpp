#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksecure_fault_information_t.start.hpp"
namespace nt
{
    // [struct _KSECURE_FAULT_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ksecure_fault_information_t
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t fault_code;       //{ +0x0000    +0x0000    +0x0000    } | .FaultCode
        _m01 uint64_t fault_va;         //{ +0x0008    +0x0008    +0x0008    } | .FaultVa
                                      
        // Windows 11            
        //                       
        _m02 uint64_t fault_pa;         //{ +0x0010    } | .FaultPa
                                      
        SDK_MAGIC_PROPERTIES( "_KSECURE_FAULT_INFORMATION.$", 0x10, true, 0x4a6f9f62a341c407 );           
        SDK_DYNAMIC_SIZE( ksecure_fault_information_t );           
    };                                
};
#include "magic/ksecure_fault_information_t.end.hpp"
