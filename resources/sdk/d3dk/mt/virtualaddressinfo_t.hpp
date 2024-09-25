#pragma once
#include <sdkgen/support_library.hpp>
#include "virtualaddressflags_t.hpp"

#include "magic/virtualaddressinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VIRTUALADDRESSINFO]
    // => WDK 10 (NV)
    //
    struct virtualaddressinfo_t                                           
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 struct d3dk::mt::virtualaddressflags_t virtual_address_flags;  //{ +0x0000    } | .VirtualAddressFlags
                                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VIRTUALADDRESSINFO.$", 0x0, false, 0x437df7e9d9b66201 );                      
        SDK_FIXED_SIZE( virtualaddressinfo_t, 0x4 );                      
    };                                                                    
};
#include "magic/virtualaddressinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::virtualaddressinfo_t, 0x4 );
