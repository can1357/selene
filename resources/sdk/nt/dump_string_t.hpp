#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_string_t.start.hpp"
namespace nt
{
    // [struct _DUMP_STRING]
    // => WDK 10 (NV)
    //
    struct dump_string_t                
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t            length;  //{ +0x0000    } | .Length
        _m01 sdk::array<wchar_t> buffer;  //{ +0x0004    } | .Buffer
                                        
        SDK_NONVOL_PROPERTIES( "_DUMP_STRING.$", 0x0, false, 0xec991a744b7d8483 );       
        SDK_FIXED_SIZE( dump_string_t, 0x4 );       
    };                                  
};
#include "magic/dump_string_t.end.hpp"
SDK_VERIFY( struct nt::dump_string_t, 0x4 );
