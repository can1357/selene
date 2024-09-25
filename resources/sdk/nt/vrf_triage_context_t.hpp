#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VRF_TRIAGE_CONTEXT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vrf_triage_context_t : int32_t            
    {                                                    
        vrf_triage_context_none =                 0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_triage_context_default =              0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_triage_context_development =          0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_triage_context_certification =        0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vrf_triage_context_certification_strict = 0x3,     // Windows 11
        vrf_triage_context_flight_targeted =      0x3,     // Windows 10 v2004, Windows 10 v20H2
        vrf_triage_context_flight_diagnostics =   0x4,     // Windows 10 v2004, Windows 10 v20H2
        //vrf_triage_context_flight_targeted =    0x4,     // Windows 11
        //vrf_triage_context_flight_diagnostics = 0x5,     // Windows 11
        vrf_triage_context_flight_monitoring =    0x5,     // Windows 10 v2004, Windows 10 v20H2
        num_vrf_triage_contexts =                 0x6,     // Windows 10 v2004, Windows 10 v20H2
        //vrf_triage_context_flight_monitoring =  0x6,     // Windows 11
        //num_vrf_triage_contexts =               0x7,     // Windows 11
    };                                                   
};
