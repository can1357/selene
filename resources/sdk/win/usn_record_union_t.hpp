#pragma once
#include <sdkgen/support_library.hpp>
#include "usn_record_v2_t.hpp"
#include "usn_record_v3_t.hpp"
#include "usn_record_v4_t.hpp"
#include "usn_record_common_header_t.hpp"

#include "magic/usn_record_union_t.start.hpp"
namespace win
{
    // [union USN_RECORD_UNION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usn_record_union_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 struct win::usn_record_common_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct win::usn_record_v2_t            v2;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .V2
        _m02 struct win::usn_record_v3_t            v3;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .V3
        _m03 struct win::usn_record_v4_t            v4;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .V4
                                                           
        SDK_MAGIC_PROPERTIES( "USN_RECORD_UNION.$", 0x50, true, 0xa9df8cc338b886d );       
        SDK_FIXED_SIZE( usn_record_union_t, 0x50 );        
    };                                                     
};
#include "magic/usn_record_union_t.end.hpp"
SDK_VERIFY( union win::usn_record_union_t, 0x50 );
