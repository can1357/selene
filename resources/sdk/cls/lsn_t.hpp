#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lsn_t.start.hpp"
namespace cls
{
    // [union _CLS_LSN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union lsn_t                                    
    {                                              
        struct u0_offset_t                         
        {                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                     
            _m00 uint32_t idx_record;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .idxRecord
            _m01 uint32_t cid_container;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cidContainer
                                                   
            SDK_MAGIC_PROPERTIES( "_CLS_LSN.offset.$", 0x8, true, 0x40a15b4590236363 );                         
            SDK_FIXED_SIZE( u0_offset_t, 0x8 );                         
        };                                         
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m02 u0_offset_t                offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .offset
        _m03 uint64_t                   ull_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ullOffset
                                                   
        // WDK 10                                  
        //                                         
        _m04 uint64_t                   internal;    //{ +0x0000    } | .Internal
                                                   
        SDK_NONVOL_PROPERTIES( "_CLS_LSN.$", 0x8, true, 0x6b93afe2680065b2 );           
        SDK_FIXED_SIZE( lsn_t, 0x8 );              
    };                                             
};
#include "magic/lsn_t.end.hpp"
SDK_VERIFY( struct cls::lsn_t::u0_offset_t, 0x8 );
SDK_VERIFY( union cls::lsn_t, 0x8 );
