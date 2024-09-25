#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_tph_st_table_entry_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_TPH_ST_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_tph_st_table_entry_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint8_t  lower_entry;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LowerEntry
        _m01 uint8_t  upper_entry;      //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .UpperEntry
        _m02 uint16_t as_ushort;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                      
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_TPH_ST_TABLE_ENTRY.$", 0x2, true, 0x4b78311e7b6a38de );            
        SDK_FIXED_SIZE( express_tph_st_table_entry_t, 0x2 );            
    };                                
};
#include "magic/express_tph_st_table_entry_t.end.hpp"
SDK_VERIFY( union pci::express_tph_st_table_entry_t, 0x2 );
