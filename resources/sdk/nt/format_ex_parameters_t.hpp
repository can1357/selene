#pragma once
#include <sdkgen/support_library.hpp>
#include "media_type_t.hpp"

#include "magic/format_ex_parameters_t.start.hpp"
namespace nt
{
    // [struct _FORMAT_EX_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct format_ex_parameters_t                          
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 enum nt::media_type_t   media_type;             //{ +0x0000    } | .MediaType
        _m01 uint32_t                start_cylinder_number;  //{ +0x0004    } | .StartCylinderNumber
        _m02 uint32_t                end_cylinder_number;    //{ +0x0008    } | .EndCylinderNumber
        _m03 uint32_t                start_head_number;      //{ +0x000c    } | .StartHeadNumber
        _m04 uint32_t                end_head_number;        //{ +0x0010    } | .EndHeadNumber
        _m05 uint16_t                format_gap_length;      //{ +0x0014    } | .FormatGapLength
        _m06 uint16_t                sectors_per_track;      //{ +0x0016    } | .SectorsPerTrack
        _m07 sdk::array<uint16_t, 1> sector_number;          //{ +0x0018    } | .SectorNumber
                                                           
        SDK_NONVOL_PROPERTIES( "_FORMAT_EX_PARAMETERS.$", 0x0, false, 0x897500c19ecdcfe7 );                      
        SDK_FIXED_SIZE( format_ex_parameters_t, 0x1c );                      
    };                                                     
};
#include "magic/format_ex_parameters_t.end.hpp"
SDK_VERIFY( struct nt::format_ex_parameters_t, 0x1c );
