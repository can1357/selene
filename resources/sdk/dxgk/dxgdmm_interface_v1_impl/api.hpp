#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_interface_v1_impl
{
    // [AcquireSourceSet@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7070, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd090, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2110, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd160, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_source_set;
    
    // [AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a71b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd230, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a22d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd300, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_target_set;
    
    // [CreateVidPn@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7530, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2740, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd760, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_vid_pn;
    
    // [CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a76d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dd880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a2950, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dd950, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create_vid_pn_copy;
    
    // [CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x71ba0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14ffe0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1deba0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152d10, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_vid_pn_from_last_client_committed_vid_pn;
    
    // [InitializeInterface@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec15c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a0d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ae6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a2cc, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) initialize_interface;
    
    // [IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x70270, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x150b50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3f70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x153e30, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_monitor_connected;
    
    // [IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7f60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de640, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3610, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de710, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) is_using_default_monitor_profile;
    
    // [ReleaseSourceSet@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a82e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2deaf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3a70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2debc0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) release_source_set;
    
    // [ReleaseTargetSet@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a84a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ded50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3ce0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dee20, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) release_target_set;
    
    // [ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x711e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14e690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dcd00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1284c0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) release_vid_pn;
};
#include "magic/api.end.hpp"
