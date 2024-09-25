#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/standardallocation_existingheap_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_STANDARDALLOCATION_EXISTINGHEAP]
    // => WDK 10 (NV)
    //
    struct standardallocation_existingheap_t
    {                                       
        // WDK 10          
        //                 
        _m00 uint64_t size;                   //{ +0x0000    } | .Size
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_STANDARDALLOCATION_EXISTINGHEAP.$", 0x0, false, 0x6e4161d37afb9ca5 );     
        SDK_FIXED_SIZE( standardallocation_existingheap_t, 0x8 );     
    };                                      
};
#include "magic/standardallocation_existingheap_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::standardallocation_existingheap_t, 0x8 );
