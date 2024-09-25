#pragma once
#include <sdkgen/support_library.hpp>
#include "adt_parameter_type_t.hpp"

#include "magic/adt_parameter_array_entry_t.start.hpp"
namespace se
{
    // [struct _SE_ADT_PARAMETER_ARRAY_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adt_parameter_array_entry_t             
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 enum se::adt_parameter_type_t type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                      length;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 sdk::array<uint64_t, 2>       data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
        _m03 void*                         address;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Address
                                                   
        SDK_NONVOL_PROPERTIES( "_SE_ADT_PARAMETER_ARRAY_ENTRY.$", 0x20, true, 0x9a55747db3e84f52 );        
        SDK_FIXED_SIZE( adt_parameter_array_entry_t, 0x20 );        
    };                                             
};
#include "magic/adt_parameter_array_entry_t.end.hpp"
SDK_VERIFY( struct se::adt_parameter_array_entry_t, 0x20 );
