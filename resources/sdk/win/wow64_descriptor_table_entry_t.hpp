#pragma once
#include <sdkgen/support_library.hpp>
#include "wow64_ldt_entry_t.hpp"

#include "magic/wow64_descriptor_table_entry_t.start.hpp"
namespace win
{
    // [struct _WOW64_DESCRIPTOR_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wow64_descriptor_table_entry_t             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 uint32_t                      selector;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Selector
        _m01 struct win::wow64_ldt_entry_t descriptor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Descriptor
                                                      
        SDK_MAGIC_PROPERTIES( "_WOW64_DESCRIPTOR_TABLE_ENTRY.$", 0xc, true, 0xb0186d2cbc033885 );           
        SDK_FIXED_SIZE( wow64_descriptor_table_entry_t, 0xc );           
    };                                                
};
#include "magic/wow64_descriptor_table_entry_t.end.hpp"
SDK_VERIFY( struct win::wow64_descriptor_table_entry_t, 0xc );
