#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_cs_routines_t.start.hpp"
namespace win
{
    struct ndr_cs_size_convert_routines_t;

    // [struct _NDR_CS_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_cs_routines_t                                                     
    {                                                                            
        using p_tag_getting_routines_t = sdk::function<void(void*, int32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t*)>**;                        
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 struct win::ndr_cs_size_convert_routines_t* p_size_convert_routines;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pSizeConvertRoutines
        _m01 p_tag_getting_routines_t                    p_tag_getting_routines;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTagGettingRoutines
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDR_CS_ROUTINES.$", 0x10, true, 0xc65a5dd1412bc186 );                        
        SDK_FIXED_SIZE( ndr_cs_routines_t, 0x10 );                               
    };                                                                           
};
#include "magic/ndr_cs_routines_t.end.hpp"
SDK_VERIFY( struct win::ndr_cs_routines_t, 0x10 );
