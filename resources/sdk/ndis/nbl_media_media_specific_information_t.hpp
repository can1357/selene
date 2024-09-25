#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nbl_media_media_specific_information_t.start.hpp"
namespace ndis
{
    struct nbl_media_media_specific_information_t;

    // [struct _NDIS_NBL_MEDIA_MEDIA_SPECIFIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nbl_media_media_specific_information_t
    {                                            
        using next_entry_t = struct ndis::nbl_media_media_specific_information_t*;           
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 next_entry_t           next_entry;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntry
        _m01 uint32_t               tag;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m02 sdk::array<uint8_t, 1> data;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Data
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_NBL_MEDIA_MEDIA_SPECIFIC_INFORMATION.$", 0x20, true, 0x7fbc0720c8381005 );           
        SDK_FIXED_SIZE( nbl_media_media_specific_information_t, 0x20 );           
    };                                           
};
#include "magic/nbl_media_media_specific_information_t.end.hpp"
SDK_VERIFY( struct ndis::nbl_media_media_specific_information_t, 0x20 );
