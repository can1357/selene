#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createallocationflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct createallocationflags_t           
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint1_t create_resource;          //{ +0x0000@0  } | .CreateResource
        _m01 uint1_t create_shared;            //{ +0x0000@1  } | .CreateShared
        _m02 uint1_t non_secure;               //{ +0x0000@2  } | .NonSecure
        _m03 uint1_t create_protected;         //{ +0x0000@3  } | .CreateProtected
        _m04 uint1_t restrict_shared_access;   //{ +0x0000@4  } | .RestrictSharedAccess
        _m05 uint1_t existing_sys_mem;         //{ +0x0000@5  } | .ExistingSysMem
        _m06 uint1_t nt_security_sharing;      //{ +0x0000@6  } | .NtSecuritySharing
        _m07 uint1_t read_only;                //{ +0x0000@7  } | .ReadOnly
        _m08 uint1_t create_write_combined;    //{ +0x0000@8  } | .CreateWriteCombined
        _m09 uint1_t create_cached;            //{ +0x0000@9  } | .CreateCached
        _m10 uint1_t swap_chain_back_buffer;   //{ +0x0000@10 } | .SwapChainBackBuffer
        _m11 uint1_t cross_adapter;            //{ +0x0000@11 } | .CrossAdapter
        _m12 uint1_t open_cross_adapter;       //{ +0x0000@12 } | .OpenCrossAdapter
        _m13 uint1_t partial_shared_creation;  //{ +0x0000@13 } | .PartialSharedCreation
        _m14 uint1_t zeroed;                   //{ +0x0000@14 } | .Zeroed
        _m15 uint1_t write_watch;              //{ +0x0000@15 } | .WriteWatch
        _m16 uint1_t standard_allocation;      //{ +0x0000@16 } | .StandardAllocation
        _m17 uint1_t existing_section;         //{ +0x0000@17 } | .ExistingSection
        _m18 uint1_t allow_not_zeroed;         //{ +0x0000@18 } | .AllowNotZeroed
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEALLOCATIONFLAGS.$", 0x0, false, 0xa41f85ab40a0e9d2 );                        
        SDK_FIXED_SIZE( createallocationflags_t, 0x4 );                        
    };                                       
};
#include "magic/createallocationflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createallocationflags_t, 0x4 );
