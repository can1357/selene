#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "xpf_ms_check_t.hpp"
#include "xpf_bus_check_t.hpp"
#include "xpf_tlb_check_t.hpp"
#include "xpf_cache_check_t.hpp"
#include "xpf_procinfo_validbits_t.hpp"

#include "magic/xpf_procinfo_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_PROCINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_procinfo_t                                                       
    {                                                                           
        union u0_check_info_t                                                   
        {                                                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                  
            _m02 union whea::xpf_cache_check_t cache_check;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheCheck
            _m03 union whea::xpf_tlb_check_t   tlb_check;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TlbCheck
            _m04 union whea::xpf_bus_check_t   bus_check;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusCheck
            _m05 union whea::xpf_ms_check_t    ms_check;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MsCheck
            _m06 uint64_t                      as_ulonglong;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONGLONG
                                                                                
            SDK_NONVOL_PROPERTIES( "_WHEA_XPF_PROCINFO.CheckInfo.$", 0x8, true, 0x67de30df91dc02a2 );                                 
            SDK_FIXED_SIZE( u0_check_info_t, 0x8 );                                 
        };                                                                      
                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                      
        _m00 struct nt::guid_t                              check_info_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CheckInfoId
        _m01 union whea::xpf_procinfo_validbits_t           valid_bits;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ValidBits
        _m07 u0_check_info_t                                check_info;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckInfo
        _m08 uint64_t                                       target_id;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetId
        _m09 uint64_t                                       requester_id;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RequesterId
        _m10 uint64_t                                       responder_id;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ResponderId
        _m11 uint64_t                                       instruction_pointer;  //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .InstructionPointer
                                                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_PROCINFO.$", 0x40, true, 0xfc407f59565a8838 );                    
        SDK_FIXED_SIZE( xpf_procinfo_t, 0x40 );                                 
    };                                                                          
};
#include "magic/xpf_procinfo_t.end.hpp"
SDK_VERIFY( union whea::xpf_procinfo_t::u0_check_info_t, 0x8 );
SDK_VERIFY( struct whea::xpf_procinfo_t, 0x40 );
