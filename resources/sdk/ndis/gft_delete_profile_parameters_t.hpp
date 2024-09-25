#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_delete_profile_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_DELETE_PROFILE_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_delete_profile_parameters_t           
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct ndis::object_header_t header;      //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;       //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     profile_id;  //{ +0x0008    +0x0008    +0x0008    } | .ProfileId
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_DELETE_PROFILE_PARAMETERS.$", 0xc, true, 0x47ce07b25ef3e812 );           
        SDK_FIXED_SIZE( gft_delete_profile_parameters_t, 0xc );           
    };                                               
};
#include "magic/gft_delete_profile_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::gft_delete_profile_parameters_t, 0xc );
