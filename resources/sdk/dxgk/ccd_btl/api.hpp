#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_btl
{
    // [??0CCD_BTL@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xf0548, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CCD_BTL@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1ad754, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [_FillTopology@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb92b4, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) fill_topology;
    
    // [ResolveTopologySetId@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xb93c0, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) resolve_topology_set_id;
    
    // [??0CCD_BTL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x182060, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2148f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17dbe0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance_;
    
    // [??1CCD_BTL@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e7f28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e7c98, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance_;
    
    // [ConvertVidPnToPathsModality@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae0b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e8138, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab82c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e7ea8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) convert_vid_pn_to_paths_modality;
    
    // [CreateGlobal@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf04f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x181fe0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21487c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17db60, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) create_global;
    
    // [Global@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8b3d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x120e80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17bedc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9470, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) global;
    
    // [m_pGlobalBtl@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x563a0, 0x60098 bytes
    // dxgkrnl.sys .data:0xb0100, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130cd0, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0100, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) m_p_global_btl;
    
    // [RetrieveActiveTopology@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb9418, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1202d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17b334, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe9e48, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) retrieve_active_topology;
    
    // [RetrieveActiveTopologyNoRetryNeeded@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd2218, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e831c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ab9d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e808c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) retrieve_active_topology_no_retry_needed;
    
    // [RetrieveAllPaths@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb957c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15333c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2d6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15681c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) retrieve_all_paths;
    
    // [RetrieveConnectivitySetId@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb9558, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x121c20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17cb20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe7a20, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) retrieve_connectivity_set_id;
    
    // [SetUnsupportedMonitorModesFlag@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ae268, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e83dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3abaf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e814c, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) set_unsupported_monitor_modes_flag;
};
#include "magic/api.end.hpp"
