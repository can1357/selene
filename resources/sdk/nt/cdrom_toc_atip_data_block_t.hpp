#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_toc_atip_data_block_t.start.hpp"
namespace nt
{
    // [struct _CDROM_TOC_ATIP_DATA_BLOCK]
    // => WDK 10 (NV)
    //
    struct cdrom_toc_atip_data_block_t                   
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint3_t                cdrw_reference_speed;  //{ +0x0000@0  } | .CdrwReferenceSpeed
        _m01 uint3_t                write_power;           //{ +0x0000@4  } | .WritePower
        _m02 uint1_t                true1;                 //{ +0x0000@7  } | .True1
        _m03 uint1_t                unrestricted_use;      //{ +0x0001@6  } | .UnrestrictedUse
        _m04 uint1_t                a3_valid;              //{ +0x0002@0  } | .A3Valid
        _m05 uint1_t                a2_valid;              //{ +0x0002@1  } | .A2Valid
        _m06 uint1_t                a1_valid;              //{ +0x0002@2  } | .A1Valid
        _m07 uint3_t                disc_sub_type;         //{ +0x0002@3  } | .DiscSubType
        _m08 uint1_t                is_cdrw;               //{ +0x0002@6  } | .IsCdrw
        _m09 uint1_t                true2;                 //{ +0x0002@7  } | .True2
        _m10 sdk::array<uint8_t, 3> lead_in_msf;           //{ +0x0004    } | .LeadInMsf
        _m11 sdk::array<uint8_t, 3> lead_out_msf;          //{ +0x0008    } | .LeadOutMsf
        _m12 sdk::array<uint8_t, 3> a1_values;             //{ +0x000c    } | .A1Values
        _m13 sdk::array<uint8_t, 3> a2_values;             //{ +0x0010    } | .A2Values
        _m14 sdk::array<uint8_t, 3> a3_values;             //{ +0x0014    } | .A3Values
                                                         
        SDK_NONVOL_PROPERTIES( "_CDROM_TOC_ATIP_DATA_BLOCK.$", 0x0, false, 0x386a71f3ae8595b2 );                     
        SDK_FIXED_SIZE( cdrom_toc_atip_data_block_t, 0x18 );                     
    };                                                   
};
#include "magic/cdrom_toc_atip_data_block_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_toc_atip_data_block_t, 0x18 );
