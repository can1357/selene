#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_counter_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PCW_COUNTER_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcw_counter_descriptor_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint16_t struct_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StructIndex
        _m02 uint16_t offset;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Offset
        _m03 uint16_t size;          //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Size
                                   
        SDK_NONVOL_PROPERTIES( "_PCW_COUNTER_DESCRIPTOR.$", 0x8, true, 0x64cc1209d90195d6 );             
        SDK_FIXED_SIZE( pcw_counter_descriptor_t, 0x8 );             
    };                             
};
#include "magic/pcw_counter_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::pcw_counter_descriptor_t, 0x8 );
