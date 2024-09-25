#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/va_range_desc_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VA_RANGE_DESC]
    // => WDK 10 (NV)
    //
    struct va_range_desc_t                   
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint64_t vad_address;             //{ +0x0000    } | .VadAddress
        _m01 uint32_t va_range_index;          //{ +0x0008    } | .VaRangeIndex
        _m02 uint32_t physical_adapter_index;  //{ +0x000c    } | .PhysicalAdapterIndex
        _m03 uint64_t start_address;           //{ +0x0010    } | .StartAddress
        _m04 uint64_t end_address;             //{ +0x0018    } | .EndAddress
        _m05 uint64_t driver_protection;       //{ +0x0020    } | .DriverProtection
        _m06 uint32_t owner_type;              //{ +0x0028    } | .OwnerType
        _m07 uint64_t p_owner;                 //{ +0x0030    } | .pOwner
        _m08 uint64_t owner_offset;            //{ +0x0038    } | .OwnerOffset
        _m09 uint32_t protection;              //{ +0x0040    } | .Protection
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VA_RANGE_DESC.$", 0x0, false, 0x2b97f94e3f055a08 );                       
        SDK_FIXED_SIZE( va_range_desc_t, 0x48 );                       
    };                                       
};
#include "magic/va_range_desc_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::va_range_desc_t, 0x48 );
