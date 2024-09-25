#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicedump_subsection_pointer_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_SUBSECTION_POINTER]
    // => WDK 10 (NV)
    //
    struct devicedump_subsection_pointer_t
    {                                     
        // WDK 10               
        //                      
        _m00 uint32_t dw_size;              //{ +0x0000    } | .dwSize
        _m01 uint32_t dw_flags;             //{ +0x0004    } | .dwFlags
        _m02 uint32_t dw_offset;            //{ +0x0008    } | .dwOffset
                                          
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_SUBSECTION_POINTER.$", 0x0, false, 0xe576694fd5e13671 );          
        SDK_FIXED_SIZE( devicedump_subsection_pointer_t, 0xc );          
    };                                    
};
#include "magic/devicedump_subsection_pointer_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_subsection_pointer_t, 0xc );
