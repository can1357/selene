#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_descriptor_header_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DESCRIPTOR_HEADER]
    // => WDK 10 (NV)
    //
    struct storage_descriptor_header_t
    {                                 
        // WDK 10             
        //                    
        _m00 uint32_t version;          //{ +0x0000    } | .Version
        _m01 uint32_t size;             //{ +0x0004    } | .Size
                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_DESCRIPTOR_HEADER.$", 0x0, false, 0xa83eee8af21e2580 );        
        SDK_FIXED_SIZE( storage_descriptor_header_t, 0x8 );        
    };                                
};
#include "magic/storage_descriptor_header_t.end.hpp"
SDK_VERIFY( struct nt::storage_descriptor_header_t, 0x8 );
