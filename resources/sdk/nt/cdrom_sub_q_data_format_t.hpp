#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_sub_q_data_format_t.start.hpp"
namespace nt
{
    // [struct _CDROM_SUB_Q_DATA_FORMAT]
    // => WDK 10 (NV)
    //
    struct cdrom_sub_q_data_format_t
    {                               
        // WDK 10           
        //                  
        _m00 uint8_t format;          //{ +0x0000    } | .Format
        _m01 uint8_t track;           //{ +0x0001    } | .Track
                                    
        SDK_NONVOL_PROPERTIES( "_CDROM_SUB_Q_DATA_FORMAT.$", 0x0, false, 0x7afff8cd01719782 );       
        SDK_FIXED_SIZE( cdrom_sub_q_data_format_t, 0x2 );       
    };                              
};
#include "magic/cdrom_sub_q_data_format_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_sub_q_data_format_t, 0x2 );
