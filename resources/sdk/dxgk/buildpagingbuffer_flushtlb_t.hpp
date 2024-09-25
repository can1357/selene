#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/d3dgpu_physical_address_t.hpp"

#include "magic/buildpagingbuffer_flushtlb_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_flushtlb_t                                   
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 struct nt::d3dgpu_physical_address_t root_page_table_address;  //{ +0x0000    } | .RootPageTableAddress
        _m01 void*                                h_process;                //{ +0x0010    } | .hProcess
        _m02 uint64_t                             start_virtual_address;    //{ +0x0018    } | .StartVirtualAddress
        _m03 uint64_t                             end_virtual_address;      //{ +0x0020    } | .EndVirtualAddress
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_FLUSHTLB.$", 0x0, false, 0xec0b4159cf76f916 );                        
        SDK_FIXED_SIZE( buildpagingbuffer_flushtlb_t, 0x28 );                        
    };                                                                    
};
#include "magic/buildpagingbuffer_flushtlb_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_flushtlb_t, 0x28 );
