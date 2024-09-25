#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/anon_object_header_v2_t.start.hpp"
namespace win
{
    // [struct ANON_OBJECT_HEADER_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct anon_object_header_v2_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 uint16_t          sig1;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sig1
        _m01 uint16_t          sig2;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Sig2
        _m02 uint16_t          version;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m03 uint16_t          machine;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Machine
        _m04 uint32_t          time_date_stamp;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeDateStamp
        _m05 struct nt::guid_t class_id;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClassID
        _m06 uint32_t          size_of_data;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SizeOfData
        _m07 uint32_t          flags;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m08 uint32_t          meta_data_size;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MetaDataSize
        _m09 uint32_t          meta_data_offset;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MetaDataOffset
                                                
        SDK_MAGIC_PROPERTIES( "ANON_OBJECT_HEADER_V2.$", 0x2c, true, 0xef4f8544ef733336 );                 
        SDK_FIXED_SIZE( anon_object_header_v2_t, 0x2c );                 
    };                                          
};
#include "magic/anon_object_header_v2_t.end.hpp"
SDK_VERIFY( struct win::anon_object_header_v2_t, 0x2c );
