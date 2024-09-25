#pragma once
#include <sdkgen/support_library.hpp>
#include "error_record_header_t.hpp"
#include "error_record_section_descriptor_t.hpp"

#include "magic/error_record_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_record_t                                          
    {                                                              
        using section_descriptor_t = sdk::array<struct whea::error_record_section_descriptor_t, 1>;                   
                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 struct whea::error_record_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 section_descriptor_t               section_descriptor;  //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .SectionDescriptor
                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD.$", 0xc8, true, 0x57a1814e2d55cf3f );                   
        SDK_FIXED_SIZE( error_record_t, 0xc8 );                    
    };                                                             
};
#include "magic/error_record_t.end.hpp"
SDK_VERIFY( struct whea::error_record_t, 0xc8 );
