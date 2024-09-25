#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/veto_entry_t.start.hpp"
namespace ppm
{
    // [struct _PPM_VETO_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct veto_entry_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                         
        _m00 nt::list_entry_t link;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 uint32_t         veto_reason;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VetoReason
        _m02 uint32_t         reference_count;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ReferenceCount
        _m03 uint64_t         hit_count;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HitCount
        _m04 uint64_t         last_activation_time;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LastActivationTime
        _m05 uint64_t         total_active_time;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TotalActiveTime
        _m06 uint64_t         cs_activation_time;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CsActivationTime
        _m07 uint64_t         cs_active_time;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CsActiveTime
                                                   
        SDK_MAGIC_PROPERTIES( "_PPM_VETO_ENTRY.$", 0x40, true, 0x8c11802e7bd61b96 );                     
        SDK_FIXED_SIZE( veto_entry_t, 0x40 );                     
    };                                             
};
#include "magic/veto_entry_t.end.hpp"
SDK_VERIFY( struct ppm::veto_entry_t, 0x40 );
