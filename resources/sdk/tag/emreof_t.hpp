#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"

#include "magic/emreof_t.start.hpp"
namespace tag
{
    // [struct tagEMREOF]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emreof_t                            
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 struct tag::emr_t emr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 uint32_t          n_pal_entries;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .nPalEntries
        _m02 uint32_t          off_pal_entries;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .offPalEntries
        _m03 uint32_t          n_size_last;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .nSizeLast
                                               
        SDK_NONVOL_PROPERTIES( "tagEMREOF.$", 0x14, true, 0xc282d25fb32a9669 );                
        SDK_FIXED_SIZE( emreof_t, 0x14 );                
    };                                         
};
#include "magic/emreof_t.end.hpp"
SDK_VERIFY( struct tag::emreof_t, 0x14 );
