#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/archive_member_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARCHIVE_MEMBER_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct archive_member_header_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 sdk::array<uint8_t, 16> name;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 sdk::array<uint8_t, 12> date;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Date
        _m02 sdk::array<uint8_t, 6>  user_id;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .UserID
        _m03 sdk::array<uint8_t, 6>  group_id;    //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .GroupID
        _m04 sdk::array<uint8_t, 8>  mode;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Mode
        _m05 sdk::array<uint8_t, 10> size;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Size
        _m06 sdk::array<uint8_t, 2>  end_header;  //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .EndHeader
                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARCHIVE_MEMBER_HEADER.$", 0x3c, true, 0x31c363867ce6b8af );           
        SDK_FIXED_SIZE( archive_member_header_t, 0x3c );           
    };                                          
};
#include "magic/archive_member_header_t.end.hpp"
SDK_VERIFY( struct image::archive_member_header_t, 0x3c );
