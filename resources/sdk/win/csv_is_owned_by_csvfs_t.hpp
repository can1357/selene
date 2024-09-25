#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_is_owned_by_csvfs_t.start.hpp"
namespace win
{
    // [struct _CSV_IS_OWNED_BY_CSVFS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_is_owned_by_csvfs_t  
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t owned_by_csvfs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OwnedByCSVFS
                                    
        SDK_NONVOL_PROPERTIES( "_CSV_IS_OWNED_BY_CSVFS.$", 0x1, true, 0xa51c18d0abd9f4fb );               
        SDK_FIXED_SIZE( csv_is_owned_by_csvfs_t, 0x1 );               
    };                              
};
#include "magic/csv_is_owned_by_csvfs_t.end.hpp"
SDK_VERIFY( struct win::csv_is_owned_by_csvfs_t, 0x1 );
