#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_set_media_parameters_t.start.hpp"
namespace win
{
    // [struct _TAPE_SET_MEDIA_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_set_media_parameters_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t block_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockSize
                                      
        SDK_NONVOL_PROPERTIES( "_TAPE_SET_MEDIA_PARAMETERS.$", 0x4, true, 0x67b6e78a9ce53326 );           
        SDK_FIXED_SIZE( tape_set_media_parameters_t, 0x4 );           
    };                                
};
#include "magic/tape_set_media_parameters_t.end.hpp"
SDK_VERIFY( struct win::tape_set_media_parameters_t, 0x4 );
