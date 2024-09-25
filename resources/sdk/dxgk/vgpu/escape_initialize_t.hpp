#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_head_t.hpp"
#include "../../nt/guid_t.hpp"

#include "magic/escape_initialize_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_INITIALIZE]
    // => WDK 10 (NV)
    //
    struct escape_initialize_t                        
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 struct dxgk::vgpu::escape_head_t header;   //{ +0x0000    } | .Header
        _m01 struct nt::guid_t                vm_guid;  //{ +0x000c    } | .VmGuid
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_INITIALIZE.$", 0x0, false, 0x312b054a22b4d025 );        
        SDK_FIXED_SIZE( escape_initialize_t, 0x1c );        
    };                                                
};
#include "magic/escape_initialize_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_initialize_t, 0x1c );
