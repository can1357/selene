#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_objectid_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_OBJECTID_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_objectid_buffer_t                    
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<uint8_t, 16> object_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectId
        _m01 sdk::array<uint8_t, 16> birth_volume_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BirthVolumeId
        _m02 sdk::array<uint8_t, 16> birth_object_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .BirthObjectId
        _m03 sdk::array<uint8_t, 16> domain_id;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DomainId
        _m04 sdk::array<uint8_t, 48> extended_info;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExtendedInfo
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_OBJECTID_BUFFER.$", 0x40, true, 0x20e9705f2fc4b645 );                
        SDK_FIXED_SIZE( file_objectid_buffer_t, 0x40 );                
    };                                               
};
#include "magic/file_objectid_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_objectid_buffer_t, 0x40 );
