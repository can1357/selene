#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_head_t.hpp"

#include "magic/escape_read_pci_config_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_READ_PCI_CONFIG]
    // => WDK 10 (NV)
    //
    struct escape_read_pci_config_t                  
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct dxgk::vgpu::escape_head_t header;  //{ +0x0000    } | .Header
        _m01 uint32_t                         offset;  //{ +0x000c    } | .Offset
        _m02 uint32_t                         size;    //{ +0x0010    } | .Size
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_READ_PCI_CONFIG.$", 0x0, false, 0x56227fe48ddbcd40 );       
        SDK_FIXED_SIZE( escape_read_pci_config_t, 0x14 );       
    };                                               
};
#include "magic/escape_read_pci_config_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_read_pci_config_t, 0x14 );
