#pragma once
#include <sdkgen/support_library.hpp>
#include "policy_id_t.hpp"
#include "policy_entry_type_t.hpp"

#include "magic/policy_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_POLICY_ENTRY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct policy_entry_t                                         
    {                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 enum image::policy_entry_type_t type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 enum image::policy_id_t         policy_id;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PolicyId
        _m02 const void*                     none;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .None
        _m03 uint8_t                         bool_value;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BoolValue
        _m04 int8_t                          int8_value;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Int8Value
        _m05 uint8_t                         u_int8_value;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UInt8Value
        _m06 int16_t                         int16_value;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Int16Value
        _m07 uint16_t                        u_int16_value;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UInt16Value
        _m08 int32_t                         int32_value;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Int32Value
        _m09 uint32_t                        u_int32_value;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UInt32Value
        _m10 int64_t                         int64_value;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Int64Value
        _m11 uint64_t                        u_int64_value;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UInt64Value
        _m12 const char*                     ansi_string_value;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AnsiStringValue
        _m13 const wchar_t*                  unicode_string_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UnicodeStringValue
                                                                  
        SDK_NONVOL_PROPERTIES( "_IMAGE_POLICY_ENTRY.$", 0x10, true, 0xa8ce2ef90de7d068 );                     
        SDK_FIXED_SIZE( policy_entry_t, 0x10 );                     
    };                                                            
};
#include "magic/policy_entry_t.end.hpp"
SDK_VERIFY( struct image::policy_entry_t, 0x10 );
