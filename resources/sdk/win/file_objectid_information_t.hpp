#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_objectid_information_t.start.hpp"
namespace win
{
    // [struct _FILE_OBJECTID_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_objectid_information_t               
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 int64_t                 file_reference;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReference
        _m01 sdk::array<uint8_t, 16> object_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectId
        _m02 sdk::array<uint8_t, 16> birth_volume_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BirthVolumeId
        _m03 sdk::array<uint8_t, 16> birth_object_id;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .BirthObjectId
        _m04 sdk::array<uint8_t, 16> domain_id;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DomainId
        _m05 sdk::array<uint8_t, 48> extended_info;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ExtendedInfo
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_OBJECTID_INFORMATION.$", 0x48, true, 0xbce72b373292fd14 );                
        SDK_FIXED_SIZE( file_objectid_information_t, 0x48 );                
    };                                               
};
#include "magic/file_objectid_information_t.end.hpp"
SDK_VERIFY( struct win::file_objectid_information_t, 0x48 );
