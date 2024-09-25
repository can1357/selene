#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcie_correctable_error_section_header_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER]
    // => Windows 11
    //
    struct pcie_correctable_error_section_header_t
    {                                             
        // Windows 11         
        //                    
        _m00 uint16_t version;                      //{ +0x0000    } | .Version
        _m01 uint16_t count;                        //{ +0x0002    } | .Count
                                                  
        SDK_MAGIC_PROPERTIES( "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION_HEADER.$", 0x0, false, 0x96c0cac314c565c1 );        
        SDK_FIXED_SIZE( pcie_correctable_error_section_header_t, 0x4 );        
    };                                            
};
#include "magic/pcie_correctable_error_section_header_t.end.hpp"
SDK_VERIFY( struct whea::pcie_correctable_error_section_header_t, 0x4 );
