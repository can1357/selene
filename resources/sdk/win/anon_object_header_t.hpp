#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/anon_object_header_t.start.hpp"
namespace win
{
    // [struct ANON_OBJECT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct anon_object_header_t                
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 uint16_t          sig1;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sig1
        _m01 uint16_t          sig2;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Sig2
        _m02 uint16_t          version;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m03 uint16_t          machine;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Machine
        _m04 uint32_t          time_date_stamp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeDateStamp
        _m05 struct nt::guid_t class_id;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClassID
        _m06 uint32_t          size_of_data;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SizeOfData
                                               
        SDK_MAGIC_PROPERTIES( "ANON_OBJECT_HEADER.$", 0x20, true, 0x260d7b2d3a2a2eba );                
        SDK_FIXED_SIZE( anon_object_header_t, 0x20 );                
    };                                         
};
#include "magic/anon_object_header_t.end.hpp"
SDK_VERIFY( struct win::anon_object_header_t, 0x20 );
