#pragma once
#include <sdkgen/support_library.hpp>
#include "pcie_correctable_error_devices_t.hpp"
#include "pcie_correctable_error_section_header_t.hpp"

#include "magic/pcie_correctable_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIE_CORRECTABLE_ERROR_SECTION]
    // => Windows 11
    //
    struct pcie_correctable_error_section_t                        
    {                                                              
        using whea_pcie_correctable_error_section_header_t = struct whea::pcie_correctable_error_section_header_t;        
        using devices_t =                                    sdk::array<struct whea::pcie_correctable_error_devices_t, 1>;        
                                                                   
        // Windows 11                                              
        //                                                         
        _m00 whea_pcie_correctable_error_section_header_t  header;   //{ +0x0000    } | .Header
        _m01 devices_t                                     devices;  //{ +0x0004    } | .Devices
                                                                   
        SDK_MAGIC_PROPERTIES( "_WHEA_PCIE_CORRECTABLE_ERROR_SECTION.$", 0x0, false, 0x938c089399ad6bcd );        
        SDK_FIXED_SIZE( pcie_correctable_error_section_t, 0xa0 );        
    };                                                             
};
#include "magic/pcie_correctable_error_section_t.end.hpp"
SDK_VERIFY( struct whea::pcie_correctable_error_section_t, 0xa0 );
