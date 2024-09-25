#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_toc_full_toc_data_block_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC_FULL_TOC_DATA_BLOCK]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_full_toc_data_block_t         
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint8_t                session_number;  //{ +0x0000    } | .SessionNumber
        _m01 uint4_t                control;         //{ +0x0001@0  } | .Control
        _m02 uint4_t                adr;             //{ +0x0001@4  } | .Adr
        _m03 uint8_t                point;           //{ +0x0003    } | .Point
        _m04 sdk::array<uint8_t, 3> msf_extra;       //{ +0x0004    } | .MsfExtra
        _m05 uint8_t                zero;            //{ +0x0007    } | .Zero
        _m06 sdk::array<uint8_t, 3> msf;             //{ +0x0008    } | .Msf
                                                   
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC_FULL_TOC_DATA_BLOCK.$", 0x0, false, 0xa0ac894eb6a706d0 );               
        SDK_FIXED_SIZE( cdrom_toc_full_toc_data_block_t, 0xb );               
    };                                             
};
#include "magic/cdrom_toc_full_toc_data_block_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_full_toc_data_block_t, 0xb );
