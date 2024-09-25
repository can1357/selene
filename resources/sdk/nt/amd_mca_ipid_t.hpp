#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/amd_mca_ipid_t.start.hpp"
namespace nt
{
    // [union _AMD_MCA_IPID]
    // => Windows 11
    //
    union amd_mca_ipid_t          
    {                             
        // Windows 11             
        //                        
        _m00 uint32_t instance_id;  //{ +0x0000@0  } | .InstanceId
        _m01 uint12_t hardware_id;  //{ +0x0000@32 } | .HardwareId
        _m02 uint16_t mca_type;     //{ +0x0000@48 } | .McaType
        _m03 uint64_t as_uint64;    //{ +0x0000    } | .AsUINT64
                                  
        SDK_MAGIC_PROPERTIES( "_AMD_MCA_IPID.$", 0x0, false, 0x73b36140a6992945 );            
        SDK_FIXED_SIZE( amd_mca_ipid_t, 0x8 );            
    };                            
};
#include "magic/amd_mca_ipid_t.end.hpp"
SDK_VERIFY( union nt::amd_mca_ipid_t, 0x8 );
