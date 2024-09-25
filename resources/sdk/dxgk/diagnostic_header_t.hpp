#pragma once
#include <sdkgen/support_library.hpp>
#include "diagnostic_types_t.hpp"
#include "diagnostic_categories_t.hpp"

#include "magic/diagnostic_header_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGNOSTIC_HEADER]
    // => WDK 10 (NV)
    //
    struct diagnostic_header_t                                    
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 struct dxgk::diagnostic_categories_t category;         //{ +0x0000    } | .Category
        _m01 struct dxgk::diagnostic_types_t      type;             //{ +0x0004    } | .Type
        _m02 uint16_t                             size;             //{ +0x0008@0  } | .Size
        _m03 uint32_t                             value;            //{ +0x0008    } | .Value
        _m04 uint32_t                             sequence_number;  //{ +0x000c    } | .SequenceNumber
        _m05 uint32_t                             target_id;        //{ +0x0010    } | .TargetId
        _m06 uint32_t                             source_id;        //{ +0x0010    } | .SourceId
        _m07 uint32_t                             id;               //{ +0x0010    } | .Id
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_HEADER.$", 0x0, false, 0xfdf203c8fc18f28b );                
        SDK_FIXED_SIZE( diagnostic_header_t, 0x14 );                
    };                                                            
};
#include "magic/diagnostic_header_t.end.hpp"
SDK_VERIFY( struct dxgk::diagnostic_header_t, 0x14 );
