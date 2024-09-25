#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/descriptor_desc_list_t.start.hpp"
namespace hid
{
    // [struct _HID_DESCRIPTOR_DESC_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct descriptor_desc_list_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint8_t  b_report_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bReportType
        _m01 uint16_t w_report_length;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .wReportLength
                                      
        SDK_MAGIC_PROPERTIES( "_HID_DESCRIPTOR_DESC_LIST.$", 0x3, true, 0xd46c7f70da91bed1 );                
        SDK_FIXED_SIZE( descriptor_desc_list_t, 0x3 );                
    };                                
};
#include "magic/descriptor_desc_list_t.end.hpp"
SDK_VERIFY( struct hid::descriptor_desc_list_t, 0x3 );
