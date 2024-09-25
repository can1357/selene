#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_address_t.start.hpp"
namespace stor::port
{
    // [union _RAID_ADDRESS]
    // => Windows 11
    //
    union raid_address_t           
    {                              
        // Windows 11              
        //                         
        _m00 uint8_t  path_id;       //{ +0x0000    } | .PathId
        _m01 uint8_t  target_id;     //{ +0x0001    } | .TargetId
        _m02 uint8_t  lun;           //{ +0x0002    } | .Lun
        _m03 uint24_t namespace_id;  //{ +0x0000@0  } | .NamespaceId
        _m04 uint32_t as_ulong;      //{ +0x0000    } | .AsUlong
                                   
        SDK_MAGIC_PROPERTIES( "_RAID_ADDRESS.$", 0x0, false, 0x9b28644f20257d0f );             
        SDK_FIXED_SIZE( raid_address_t, 0x4 );             
    };                             
};
#include "magic/raid_address_t.end.hpp"
SDK_VERIFY( union stor::port::raid_address_t, 0x4 );
