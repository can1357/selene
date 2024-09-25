#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_correctable_error_header_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MEMORY_CORRECTABLE_ERROR_HEADER]
    // => Windows 11
    //
    struct memory_correctable_error_header_t
    {                                       
        // Windows 11         
        //                    
        _m00 uint16_t version;                //{ +0x0000    } | .Version
        _m01 uint16_t count;                  //{ +0x0002    } | .Count
                                            
        SDK_MAGIC_PROPERTIES( "_WHEA_MEMORY_CORRECTABLE_ERROR_HEADER.$", 0x0, false, 0x6b25ba148b0376da );        
        SDK_FIXED_SIZE( memory_correctable_error_header_t, 0x4 );        
    };                                      
};
#include "magic/memory_correctable_error_header_t.end.hpp"
SDK_VERIFY( struct whea::memory_correctable_error_header_t, 0x4 );
