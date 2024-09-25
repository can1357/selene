#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/atom_table_reference_t.start.hpp"
namespace rtl
{
    // [struct _RTL_ATOM_TABLE_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct atom_table_reference_t             
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::list_entry_t low_box_list;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LowBoxList
        _m01 uint32_t         low_box_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LowBoxID
        _m02 uint16_t         reference_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ReferenceCount
        _m03 uint16_t         flags;            //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .Flags
                                              
        SDK_MAGIC_PROPERTIES( "_RTL_ATOM_TABLE_REFERENCE.$", 0x18, true, 0xe15d666be1fa338b );                
        SDK_FIXED_SIZE( atom_table_reference_t, 0x18 );                
    };                                        
};
#include "magic/atom_table_reference_t.end.hpp"
SDK_VERIFY( struct rtl::atom_table_reference_t, 0x18 );
