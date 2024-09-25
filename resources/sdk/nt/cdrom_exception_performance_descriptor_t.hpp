#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_exception_performance_descriptor_t.start.hpp"
namespace nt
{
    // [struct _CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct cdrom_exception_performance_descriptor_t
    {                                              
        // WDK 10                        
        //                               
        _m00 sdk::array<uint8_t, 4> lba;             //{ +0x0000    } | .Lba
        _m01 sdk::array<uint8_t, 2> time;            //{ +0x0004    } | .Time
                                                   
        SDK_NONVOL_PROPERTIES( "_CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR.$", 0x0, false, 0x2a040a108ed7dd2b );     
        SDK_FIXED_SIZE( cdrom_exception_performance_descriptor_t, 0x6 );     
    };                                             
};
#include "magic/cdrom_exception_performance_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_exception_performance_descriptor_t, 0x6 );
