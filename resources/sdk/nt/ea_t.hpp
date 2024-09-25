#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ea_t.start.hpp"
namespace nt
{
    // [struct _Ea]
    // => WDK 10 (NV)
    //
    struct ea_t                             
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint16_t length;                 //{ +0x0000    } | .Length
        _m01 uint16_t flags;                  //{ +0x0002    } | .Flags
        _m02 uint32_t ea_size;                //{ +0x0004    } | .EaSize
        _m03 uint32_t ea_information_offset;  //{ +0x0008    } | .EaInformationOffset
                                            
        SDK_NONVOL_PROPERTIES( "_Ea.$", 0x0, false, 0xc5f07a329ea59258 );                      
        SDK_FIXED_SIZE( ea_t, 0xc );                      
    };                                      
};
#include "magic/ea_t.end.hpp"
SDK_VERIFY( struct nt::ea_t, 0xc );
