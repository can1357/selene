#pragma once
#include <sdkgen/support_library.hpp>
#include "relative_module_address_t.hpp"

#include "magic/patchmatchdata_t.start.hpp"
namespace win
{
    // [struct _PATCHMATCHDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct patchmatchdata_t                                     
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                      
        _m00 uint32_t                              dw_size_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeData
        _m01 struct win::relative_module_address_t rva;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rva
        _m02 sdk::array<uint8_t>                   data;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .data
                                                                
        SDK_MAGIC_PROPERTIES( "_PATCHMATCHDATA.$", 0x4c, true, 0x983d69f3a1c0a8ac );             
        SDK_FIXED_SIZE( patchmatchdata_t, 0x4c );               
    };                                                          
};
#include "magic/patchmatchdata_t.end.hpp"
SDK_VERIFY( struct win::patchmatchdata_t, 0x4c );
