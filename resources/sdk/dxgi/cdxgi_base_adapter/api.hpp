#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_base_adapter
{
    // [FinalRelease@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x11304, 0x17e70 bytes
    // dxgi.dll .text:0x11334, 0x17e70 bytes
    // dxgi.dll .text:0xc7e4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) final_release;
    
    // [??1CDXGIBaseAdapter@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5da58, 0x17e70 bytes
    // dxgi.dll .text:0x5db48, 0x17e70 bytes
    // dxgi.dll .text:0x69688, 0x18b10 bytes
    // dxgi.dll .text:0x5ef7c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [FillOutThunks@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5ffc, 0x17e70 bytes
    // dxgi.dll .text:0x5ffc, 0x17e70 bytes
    // dxgi.dll .text:0x20f50, 0x18b10 bytes
    // dxgi.dll .text:0x1abac, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) fill_out_thunks;
    
    // [GetAdapterCapabilities@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea20, 0x17e70 bytes
    // dxgi.dll .text:0x1ed30, 0x17e70 bytes
    // dxgi.dll .text:0x26460, 0x18b10 bytes
    // dxgi.dll .text:0x1fb20, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) get_adapter_capabilities;
    
    // [GetDesc@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1df70, 0x17e70 bytes
    // dxgi.dll .text:0x1e280, 0x17e70 bytes
    // dxgi.dll .text:0x1d0c0, 0x18b10 bytes
    // dxgi.dll .text:0x19b90, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_desc;
    
    // [GetParent@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa4b0, 0x17e70 bytes
    // dxgi.dll .text:0xa4b0, 0x17e70 bytes
    // dxgi.dll .text:0x237c0, 0x18b10 bytes
    // dxgi.dll .text:0x1ecc0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_parent;
    
    // [GetPrimaryVidPnSourceId@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3f20, 0x17e70 bytes
    // dxgi.dll .text:0x3f20, 0x17e70 bytes
    // dxgi.dll .text:0x8790, 0x18b10 bytes
    // dxgi.dll .text:0x5da0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) get_primary_vid_pn_source_id;
    
    // [GetUMDDeviceSize@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ed40, 0x17e70 bytes
    // dxgi.dll .text:0x1f050, 0x17e70 bytes
    // dxgi.dll .text:0x268b0, 0x18b10 bytes
    // dxgi.dll .text:0x1fe40, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) get_umd_device_size;
    
    // [GetUMDFileNameInfo@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17148, 0x17e70 bytes
    // dxgi.dll .text:0x173a8, 0x17e70 bytes
    // dxgi.dll .text:0x1bc7c, 0x18b10 bytes
    // dxgi.dll .text:0x128b8, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) get_umd_file_name_info;
    
    // [GetUMDVersion@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17560, 0x17e70 bytes
    // dxgi.dll .text:0x177c0, 0x17e70 bytes
    // dxgi.dll .text:0x1bba4, 0x18b10 bytes
    // dxgi.dll .text:0x12cd0, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) get_umd_version;
    
    // [InstanceThunks@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5e90, 0x17e70 bytes
    // dxgi.dll .text:0x5e90, 0x17e70 bytes
    // dxgi.dll .text:0x20de0, 0x18b10 bytes
    // dxgi.dll .text:0x1aa40, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) instance_thunks;
    
    // [InternalGetAdapterDesc@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17100, 0x17e70 bytes
    // dxgi.dll .text:0x17360, 0x17e70 bytes
    // dxgi.dll .text:0x1b7f0, 0x18b10 bytes
    // dxgi.dll .text:0x12870, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) internal_get_adapter_desc;
    
    // [IsDriverUpdateInProgress@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1789c, 0x17e70 bytes
    // dxgi.dll .text:0x17afc, 0x17e70 bytes
    // dxgi.dll .text:0x23580, 0x18b10 bytes
    // dxgi.dll .text:0x1300c, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) is_driver_update_in_progress;
    
    // [IsLda@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a0c0, 0x17e70 bytes
    // dxgi.dll .text:0x4a1b0, 0x17e70 bytes
    // dxgi.dll .text:0x553a0, 0x18b10 bytes
    // dxgi.dll .text:0x4b640, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) is_lda;
    
    // [IsWARP@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x90a0, 0x17e70 bytes
    // dxgi.dll .text:0x90a0, 0x17e70 bytes
    // dxgi.dll .text:0x22cc0, 0x18b10 bytes
    // dxgi.dll .text:0x1d920, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) is_warp;
    
    // [LoadThunks@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x10970, 0x17e70 bytes
    // dxgi.dll .text:0x109a0, 0x17e70 bytes
    // dxgi.dll .text:0x12e80, 0x18b10 bytes
    // dxgi.dll .text:0xbe50, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) load_thunks;
    
    // [LoadUMD@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x17740, 0x17e70 bytes
    // dxgi.dll .text:0x179a0, 0x17e70 bytes
    // dxgi.dll .text:0x233f0, 0x18b10 bytes
    // dxgi.dll .text:0x12eb0, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) load_umd;
    
    // [MismatchedVendorLda@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a0e0, 0x17e70 bytes
    // dxgi.dll .text:0x4a1d0, 0x17e70 bytes
    // dxgi.dll .text:0x553d0, 0x18b10 bytes
    // dxgi.dll .text:0x4b660, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) mismatched_vendor_lda;
    
    // [RetireUsage@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1eac0, 0x17e70 bytes
    // dxgi.dll .text:0x1edd0, 0x17e70 bytes
    // dxgi.dll .text:0x26520, 0x18b10 bytes
    // dxgi.dll .text:0x1fbc0, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) retire_usage;
    
    // [SetAdapterCapabilities@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ead0, 0x17e70 bytes
    // dxgi.dll .text:0x1ede0, 0x17e70 bytes
    // dxgi.dll .text:0x26540, 0x18b10 bytes
    // dxgi.dll .text:0x1fbd0, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) set_adapter_capabilities;
    
    // [WddmVersion@CDXGIBaseAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x170e0, 0x17e70 bytes
    // dxgi.dll .text:0x17340, 0x17e70 bytes
    // dxgi.dll .text:0x1b7d0, 0x18b10 bytes
    // dxgi.dll .text:0x12850, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) wddm_version;
};
#include "magic/api.end.hpp"
