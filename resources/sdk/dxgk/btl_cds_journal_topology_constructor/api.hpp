#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::btl_cds_journal_topology_constructor
{
    // [AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3058, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x138890, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) augment_topology;
    
    // [_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ebd64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ad3ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ebad4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) augment_vid_pn_topology;
};
#include "magic/api.end.hpp"
