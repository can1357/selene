#pragma once
#include <sdkgen/support_library.hpp>
#include "relative_module_address_t.hpp"

#include "magic/patchwritedata_t.start.hpp"
namespace win
{
    // [struct _PATCHWRITEDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct patchwritedata_t                                     
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                      
        _m00 uint32_t                              dw_size_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSizeData
        _m01 struct win::relative_module_address_t rva;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rva
        _m02 sdk::array<uint8_t>                   data;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .data
                                                                
        SDK_MAGIC_PROPERTIES( "_PATCHWRITEDATA.$", 0x4c, true, 0x100abaeb5b9b42e2 );             
        SDK_FIXED_SIZE( patchwritedata_t, 0x4c );               
    };                                                          
};
#include "magic/patchwritedata_t.end.hpp"
SDK_VERIFY( struct win::patchwritedata_t, 0x4c );
