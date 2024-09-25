#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/report_ids_t.start.hpp"
namespace hidp
{
    // [struct _HIDP_REPORT_IDS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct report_ids_t                 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint8_t  report_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReportID
        _m01 uint8_t  collection_number;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .CollectionNumber
        _m02 uint16_t input_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .InputLength
        _m03 uint16_t output_length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OutputLength
        _m04 uint16_t feature_length;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .FeatureLength
                                        
        SDK_MAGIC_PROPERTIES( "_HIDP_REPORT_IDS.$", 0x8, true, 0x5e604b203a4e2bf5 );                  
        SDK_FIXED_SIZE( report_ids_t, 0x8 );                  
    };                                  
};
#include "magic/report_ids_t.end.hpp"
SDK_VERIFY( struct hidp::report_ids_t, 0x8 );
