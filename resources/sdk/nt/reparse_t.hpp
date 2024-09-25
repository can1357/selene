#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reparse_t.start.hpp"
namespace nt
{
    // [struct _Reparse]
    // => WDK 10 (NV)
    //
    struct reparse_t                      
    {                                     
        // WDK 10                         
        //                                
        _m00 uint16_t length;               //{ +0x0000    } | .Length
        _m01 uint16_t flags;                //{ +0x0002    } | .Flags
        _m02 uint32_t reparse_data_size;    //{ +0x0004    } | .ReparseDataSize
        _m03 uint32_t reparse_data_offset;  //{ +0x0008    } | .ReparseDataOffset
                                          
        SDK_NONVOL_PROPERTIES( "_Reparse.$", 0x0, false, 0xd2fb6766c95c0919 );                    
        SDK_FIXED_SIZE( reparse_t, 0xc );                    
    };                                    
};
#include "magic/reparse_t.end.hpp"
SDK_VERIFY( struct nt::reparse_t, 0xc );
