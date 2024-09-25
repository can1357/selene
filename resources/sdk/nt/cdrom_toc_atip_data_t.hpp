#pragma once
#include <sdkgen/support_library.hpp>
#include "cdrom_toc_atip_data_block_t.hpp"

#include "magic/cdrom_toc_atip_data_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC_ATIP_DATA]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_atip_data_t                
    {                                           
        using descriptors_t = sdk::array<struct nt::cdrom_toc_atip_data_block_t>;            
                                                
        // WDK 10                               
        //                                      
        _m00 sdk::array<uint8_t, 2> length;       //{ +0x0000    } | .Length
        _m01 descriptors_t          descriptors;  //{ +0x0004    } | .Descriptors
                                                
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC_ATIP_DATA.$", 0x0, false, 0x5f6082253d569129 );            
        SDK_FIXED_SIZE( cdrom_toc_atip_data_t, 0x4 );            
    };                                          
};
#include "magic/cdrom_toc_atip_data_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_atip_data_t, 0x4 );
