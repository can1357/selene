#pragma once
#include <sdkgen/support_library.hpp>
#include "exhandle_t.hpp"

#include "magic/handle_table_entry_t.start.hpp"
namespace nt
{
    union handle_table_entry_t;
    struct handle_table_entry_info_t;

    // [union _HANDLE_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union handle_table_entry_t                                                     
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                         
        _m00 volatile int64_t                               volatile_low_value;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolatileLowValue
        _m01 int64_t                                        low_value;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowValue
        _m02 struct nt::handle_table_entry_info_t volatile* info_table;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InfoTable
        _m03 int64_t                                        high_value;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighValue
        _m04 union nt::handle_table_entry_t*                next_free_handle_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextFreeHandleEntry
        _m05 struct nt::exhandle_t                          leaf_handle_value;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LeafHandleValue
        _m06 int64_t                                        ref_count_field;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCountField
        _m07 volatile uint1_t                               unlocked;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Unlocked
        _m08 volatile uint16_t                              ref_cnt;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RefCnt
        _m09 volatile uint3_t                               attributes;              //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .Attributes
        _m10 volatile uint44_t                              object_pointer_bits;     //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .ObjectPointerBits
        _m11 uint25_t                                       granted_access_bits;     //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .GrantedAccessBits
        _m12 uint1_t                                        no_rights_upgrade;       //{ +0x0008@25 +0x0008@25 +0x0008@25 +0x0008@25 } | .NoRightsUpgrade
                                                                                   
        SDK_MAGIC_PROPERTIES( "_HANDLE_TABLE_ENTRY.$", 0x10, true, 0x66b880f2b12fcee4 );                       
        SDK_FIXED_SIZE( handle_table_entry_t, 0x10 );                              
    };                                                                             
};
#include "magic/handle_table_entry_t.end.hpp"
SDK_VERIFY( union nt::handle_table_entry_t, 0x10 );
