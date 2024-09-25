#pragma once
#include <sdkgen/support_library.hpp>
#include "container_information_t.hpp"

#include "magic/archive_descriptor_t.start.hpp"
namespace cls
{
    // [struct _CLS_ARCHIVE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct archive_descriptor_t                                 
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 uint64_t                            coff_low;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .coffLow
        _m01 uint64_t                            coff_high;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .coffHigh
        _m02 struct cls::container_information_t info_container;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .infoContainer
                                                                
        SDK_NONVOL_PROPERTIES( "_CLS_ARCHIVE_DESCRIPTOR.$", 0x250, true, 0x8bc1e334f96548dc );               
        SDK_FIXED_SIZE( archive_descriptor_t, 0x250 );               
    };                                                          
};
#include "magic/archive_descriptor_t.end.hpp"
SDK_VERIFY( struct cls::archive_descriptor_t, 0x250 );
