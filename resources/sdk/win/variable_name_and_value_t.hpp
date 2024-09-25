#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/variable_name_and_value_t.start.hpp"
namespace win
{
    // [struct _VARIABLE_NAME_AND_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct variable_name_and_value_t                  
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               value_offset;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ValueOffset
        _m02 uint32_t               value_length;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueLength
        _m03 uint32_t               attributes;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Attributes
        _m04 struct nt::guid_t      vendor_guid;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VendorGuid
        _m05 sdk::array<wchar_t, 1> name;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Name
                                                      
        SDK_MAGIC_PROPERTIES( "_VARIABLE_NAME_AND_VALUE.$", 0x24, true, 0x88bb10ca930a523c );                  
        SDK_FIXED_SIZE( variable_name_and_value_t, 0x24 );                  
    };                                                
};
#include "magic/variable_name_and_value_t.end.hpp"
SDK_VERIFY( struct win::variable_name_and_value_t, 0x24 );
