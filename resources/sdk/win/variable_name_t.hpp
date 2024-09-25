#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/variable_name_t.start.hpp"
namespace win
{
    // [struct _VARIABLE_NAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct variable_name_t                            
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 struct nt::guid_t      vendor_guid;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VendorGuid
        _m02 sdk::array<wchar_t, 1> name;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Name
                                                      
        SDK_MAGIC_PROPERTIES( "_VARIABLE_NAME.$", 0x18, true, 0xf008ca0a543d845c );                  
        SDK_FIXED_SIZE( variable_name_t, 0x18 );                  
    };                                                
};
#include "magic/variable_name_t.end.hpp"
SDK_VERIFY( struct win::variable_name_t, 0x18 );
