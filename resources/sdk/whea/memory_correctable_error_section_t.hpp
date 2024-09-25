#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_correctable_error_data_t.hpp"
#include "memory_correctable_error_header_t.hpp"

#include "magic/memory_correctable_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION]
    // => Windows 11
    //
    struct memory_correctable_error_section_t                      
    {                                                              
        using data_t = sdk::array<struct whea::memory_correctable_error_data_t, 1>;       
                                                                   
        // Windows 11                                              
        //                                                         
        _m00 struct whea::memory_correctable_error_header_t header;  //{ +0x0000    } | .Header
        _m01 data_t                                         data;    //{ +0x0004    } | .Data
                                                                   
        SDK_MAGIC_PROPERTIES( "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION.$", 0x0, false, 0x778dc2facb5d0d5 );       
        SDK_FIXED_SIZE( memory_correctable_error_section_t, 0x1c );       
    };                                                             
};
#include "magic/memory_correctable_error_section_t.end.hpp"
SDK_VERIFY( struct whea::memory_correctable_error_section_t, 0x1c );
