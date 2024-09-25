#pragma once
#include <sdkgen/support_library.hpp>
#include "sub_q_header_t.hpp"

#include "magic/sub_q_media_catalog_number_t.start.hpp"
namespace nt
{
    // [struct _SUB_Q_MEDIA_CATALOG_NUMBER]
    // => WDK 10 (NV)
    //
    struct sub_q_media_catalog_number_t              
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct nt::sub_q_header_t header;         //{ +0x0000    } | .Header
        _m01 uint8_t                   format_code;    //{ +0x0004    } | .FormatCode
        _m02 uint1_t                   mcval;          //{ +0x0008@7  } | .Mcval
        _m03 sdk::array<uint8_t, 15>   media_catalog;  //{ +0x0009    } | .MediaCatalog
                                                     
        SDK_NONVOL_PROPERTIES( "_SUB_Q_MEDIA_CATALOG_NUMBER.$", 0x0, false, 0x8270e9d0ca449f54 );              
        SDK_FIXED_SIZE( sub_q_media_catalog_number_t, 0x18 );              
    };                                               
};
#include "magic/sub_q_media_catalog_number_t.end.hpp"
SDK_VERIFY( struct nt::sub_q_media_catalog_number_t, 0x18 );
