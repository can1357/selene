#pragma once
#include <sdkgen/support_library.hpp>
#include "unmap_block_descriptor_t.hpp"

#include "magic/unmap_list_header_t.start.hpp"
namespace nt
{
    // [struct _UNMAP_LIST_HEADER]
    // => WDK 10 (NV)
    //
    struct unmap_list_header_t                                                       
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m00 sdk::array<uint8_t, 2>                          data_length;              //{ +0x0000    } | .DataLength
        _m01 sdk::array<uint8_t, 2>                          block_descr_data_length;  //{ +0x0002    } | .BlockDescrDataLength
        _m02 sdk::array<struct nt::unmap_block_descriptor_t> descriptors;              //{ +0x0008    } | .Descriptors
                                                                                     
        SDK_NONVOL_PROPERTIES( "_UNMAP_LIST_HEADER.$", 0x0, false, 0xda92624d8146055b );                        
        SDK_FIXED_SIZE( unmap_list_header_t, 0x8 );                                  
    };                                                                               
};
#include "magic/unmap_list_header_t.end.hpp"
SDK_VERIFY( struct nt::unmap_list_header_t, 0x8 );
