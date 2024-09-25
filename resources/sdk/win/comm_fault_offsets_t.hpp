#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/comm_fault_offsets_t.start.hpp"
namespace win
{
    // [struct _COMM_FAULT_OFFSETS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct comm_fault_offsets_t   
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int16_t comm_offset;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommOffset
        _m01 int16_t fault_offset;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FaultOffset
                                  
        SDK_MAGIC_PROPERTIES( "_COMM_FAULT_OFFSETS.$", 0x4, true, 0x503b79dc021ea687 );             
        SDK_FIXED_SIZE( comm_fault_offsets_t, 0x4 );             
    };                            
};
#include "magic/comm_fault_offsets_t.end.hpp"
SDK_VERIFY( struct win::comm_fault_offsets_t, 0x4 );
