#pragma once
#include <sdkgen/support_library.hpp>
#include "media_type_t.hpp"

#include "magic/format_parameters_t.start.hpp"
namespace nt
{
    // [struct _FORMAT_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct format_parameters_t                           
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 enum nt::media_type_t media_type;             //{ +0x0000    } | .MediaType
        _m01 uint32_t              start_cylinder_number;  //{ +0x0004    } | .StartCylinderNumber
        _m02 uint32_t              end_cylinder_number;    //{ +0x0008    } | .EndCylinderNumber
        _m03 uint32_t              start_head_number;      //{ +0x000c    } | .StartHeadNumber
        _m04 uint32_t              end_head_number;        //{ +0x0010    } | .EndHeadNumber
                                                         
        SDK_NONVOL_PROPERTIES( "_FORMAT_PARAMETERS.$", 0x0, false, 0xfb1fc118608be9f9 );                      
        SDK_FIXED_SIZE( format_parameters_t, 0x14 );                      
    };                                                   
};
#include "magic/format_parameters_t.end.hpp"
SDK_VERIFY( struct nt::format_parameters_t, 0x14 );
