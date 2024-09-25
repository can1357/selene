#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentflags_t.hpp"
#include "cpuhostaperture_t.hpp"

#include "magic/segmentdescriptor4_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTDESCRIPTOR4]
    // => WDK 10 (NV)
    //
    struct segmentdescriptor4_t                                          
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 struct dxgk::segmentflags_t    flags;                         //{ +0x0000    } | .Flags
        _m01 int64_t                        base_address;                  //{ +0x0008    } | .BaseAddress
        _m02 uint64_t                       size;                          //{ +0x0010    } | .Size
        _m03 uint64_t                       commit_limit;                  //{ +0x0018    } | .CommitLimit
        _m04 uint64_t                       system_memory_end_address;     //{ +0x0020    } | .SystemMemoryEndAddress
        _m05 int64_t                        cpu_translated_address;        //{ +0x0028    } | .CpuTranslatedAddress
        _m06 struct dxgk::cpuhostaperture_t cpu_host_aperture;             //{ +0x0028    } | .CpuHostAperture
        _m07 uint32_t                       num_invalid_memory_ranges;     //{ +0x0038    } | .NumInvalidMemoryRanges
        _m08 uint64_t                       vpr_range_start_offset;        //{ +0x0040    } | .VprRangeStartOffset
        _m09 uint64_t                       vpr_range_size;                //{ +0x0048    } | .VprRangeSize
        _m10 uint32_t                       vpr_alignment;                 //{ +0x0050    } | .VprAlignment
        _m11 uint32_t                       num_vpr_supported;             //{ +0x0054    } | .NumVprSupported
        _m12 uint32_t                       vpr_reserve_size;              //{ +0x0058    } | .VprReserveSize
        _m13 uint32_t                       num_uefi_frame_buffer_ranges;  //{ +0x005c    } | .NumUEFIFrameBufferRanges
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTDESCRIPTOR4.$", 0x0, false, 0xd155126c507c5f50 );                             
        SDK_FIXED_SIZE( segmentdescriptor4_t, 0x60 );                             
    };                                                                   
};
#include "magic/segmentdescriptor4_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentdescriptor4_t, 0x60 );
