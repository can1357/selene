#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/description_header_t.hpp"

#include "magic/cached_table_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_CACHED_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_table_t                                     
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 nt::list_entry_t                links;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 int64_t                         physical_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PhysicalAddress
        _m02 struct nt::description_header_t header;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Header
                                                              
        SDK_MAGIC_PROPERTIES( "_ACPI_CACHED_TABLE.$", 0x40, true, 0xf553cf909df8656d );                 
        SDK_FIXED_SIZE( cached_table_t, 0x40 );                 
    };                                                        
};
#include "magic/cached_table_t.end.hpp"
SDK_VERIFY( struct acpi::cached_table_t, 0x40 );
