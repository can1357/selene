#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_performance_header_t.start.hpp"
namespace nt
{
    // [struct _CDROM_PERFORMANCE_HEADER]
    // => WDK 10 (NV)
    //
    struct cdrom_performance_header_t           
    {                                           
        // WDK 10                               
        //                                      
        _m00 sdk::array<uint8_t, 4> data_length;  //{ +0x0000    } | .DataLength
        _m01 uint1_t                except;       //{ +0x0004@0  } | .Except
        _m02 uint1_t                write;        //{ +0x0004@1  } | .Write
        _m03 sdk::array<uint8_t>    data;         //{ +0x0008    } | .Data
                                                
        SDK_NONVOL_PROPERTIES( "_CDROM_PERFORMANCE_HEADER.$", 0x0, false, 0xd8f8ae9730e77b49 );            
        SDK_FIXED_SIZE( cdrom_performance_header_t, 0x8 );            
    };                                          
};
#include "magic/cdrom_performance_header_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_performance_header_t, 0x8 );
