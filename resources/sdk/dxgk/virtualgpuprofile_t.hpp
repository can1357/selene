#pragma once
#include <sdkgen/support_library.hpp>
#include "virtualgpucapability_t.hpp"

#include "magic/virtualgpuprofile_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUPROFILE]
    // => WDK 10 (NV)
    //
    struct virtualgpuprofile_t        
    {                                 
        using capability_t = sdk::array<struct dxgk::virtualgpucapability_t, 4>;           
                                      
        // WDK 10                     
        //                            
        _m00 capability_t  capability;  //{ +0x0000    } | .Capability
                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUPROFILE.$", 0x0, false, 0xf061e04347cc63d1 );           
        SDK_FIXED_SIZE( virtualgpuprofile_t, 0x60 );           
    };                                
};
#include "magic/virtualgpuprofile_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpuprofile_t, 0x60 );
