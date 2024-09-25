#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/nbl_media_specific_information_ex_t.start.hpp"
namespace ndis
{
    struct nbl_media_specific_information_ex_t;

    // [struct _NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nbl_media_specific_information_ex_t       
    {                                                
        using next_entry_t = struct ndis::nbl_media_specific_information_ex_t*;           
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct ndis::object_header_t header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 next_entry_t                 next_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextEntry
        _m02 uint32_t                     tag;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Tag
        _m03 void*                        data;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX.$", 0x20, true, 0x448142f65f0f45d );           
        SDK_FIXED_SIZE( nbl_media_specific_information_ex_t, 0x20 );           
    };                                               
};
#include "magic/nbl_media_specific_information_ex_t.end.hpp"
SDK_VERIFY( struct ndis::nbl_media_specific_information_ex_t, 0x20 );
