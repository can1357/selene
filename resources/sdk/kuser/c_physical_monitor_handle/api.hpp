#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_physical_monitor_handle
{
    // [??1CPhysicalMonitorHandle@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x271168, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0CPhysicalMonitorHandle@@QEAA@AEAU_LUID@@KPEAJ@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x271070, 0x1596d bytes
    // win32kfull.sys .text:0x271110, 0x1659e bytes
    // win32kfull.sys .text:0x270fc0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2726c4, 0x1596d bytes
    // win32kfull.sys .text:0x272774, 0x1659e bytes
    // win32kfull.sys .text:0x272614, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) is_ddcci_capabilities_string_initialized;
    
    // [ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a518, 0x13864 bytes
    // win32kfull.sys .text:0x2712c0, 0x1596d bytes
    // win32kfull.sys .text:0x271370, 0x1659e bytes
    // win32kfull.sys .text:0x271210, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) compute_ddcci_message_checksum;
    
    // [ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a53c, 0x13864 bytes
    // win32kfull.sys .text:0x2712f0, 0x1596d bytes
    // win32kfull.sys .text:0x2713a0, 0x1659e bytes
    // win32kfull.sys .text:0x271240, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) convert_unicode_ddcci_capabilities_string_to_ascii_string;
    
    // [DdcciGetCapabilitiesString@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a728, 0x13864 bytes
    // win32kfull.sys .text:0x271504, 0x1596d bytes
    // win32kfull.sys .text:0x2715b0, 0x1659e bytes
    // win32kfull.sys .text:0x271454, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) ddcci_get_capabilities_string;
    
    // [DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a7dc, 0x13864 bytes
    // win32kfull.sys .text:0x27161c, 0x1596d bytes
    // win32kfull.sys .text:0x2716c8, 0x1659e bytes
    // win32kfull.sys .text:0x27156c, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) ddcci_get_capabilities_string_from_monitor;
    
    // [DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a9fc, 0x13864 bytes
    // win32kfull.sys .text:0x2718d4, 0x1596d bytes
    // win32kfull.sys .text:0x271980, 0x1659e bytes
    // win32kfull.sys .text:0x271824, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) ddcci_get_capabilities_string_from_registry;
    
    // [DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ab8c, 0x13864 bytes
    // win32kfull.sys .text:0x271ad0, 0x1596d bytes
    // win32kfull.sys .text:0x271b7c, 0x1659e bytes
    // win32kfull.sys .text:0x271a20, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) ddcci_get_capabilities_string_internal;
    
    // [DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ac38, 0x13864 bytes
    // win32kfull.sys .text:0x271c08, 0x1596d bytes
    // win32kfull.sys .text:0x271cb4, 0x1659e bytes
    // win32kfull.sys .text:0x271b58, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) ddcci_get_capabilities_string_length;
    
    // [DdcciGetTimingReport@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ad1c, 0x13864 bytes
    // win32kfull.sys .text:0x271d28, 0x1596d bytes
    // win32kfull.sys .text:0x271dd4, 0x1659e bytes
    // win32kfull.sys .text:0x271c78, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) ddcci_get_timing_report;
    
    // [DdcciGetVCPFeature@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25aeb4, 0x13864 bytes
    // win32kfull.sys .text:0x271eac, 0x1596d bytes
    // win32kfull.sys .text:0x271f58, 0x1659e bytes
    // win32kfull.sys .text:0x271dfc, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) ddcci_get_vcp_feature;
    
    // [DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25aff8, 0x13864 bytes
    // win32kfull.sys .text:0x271fb0, 0x1596d bytes
    // win32kfull.sys .text:0x27205c, 0x1659e bytes
    // win32kfull.sys .text:0x271f00, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) ddcci_receive_data_from_monitor_device;
    
    // [DdcciSaveCurrentSettings@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b050, 0x13864 bytes
    // win32kfull.sys .text:0x272010, 0x1596d bytes
    // win32kfull.sys .text:0x2720bc, 0x1659e bytes
    // win32kfull.sys .text:0x271f60, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) ddcci_save_current_settings;
    
    // [DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b0d0, 0x13864 bytes
    // win32kfull.sys .text:0x272064, 0x1596d bytes
    // win32kfull.sys .text:0x272110, 0x1659e bytes
    // win32kfull.sys .text:0x271fb4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) ddcci_send_data_to_monitor_device;
    
    // [DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b148, 0x13864 bytes
    // win32kfull.sys .text:0x2720e4, 0x1596d bytes
    // win32kfull.sys .text:0x272190, 0x1659e bytes
    // win32kfull.sys .text:0x272034, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) ddcci_send_ioctl_to_monitor_device;
    
    // [DdcciSetVCPFeature@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b1e8, 0x13864 bytes
    // win32kfull.sys .text:0x27227c, 0x1596d bytes
    // win32kfull.sys .text:0x272328, 0x1659e bytes
    // win32kfull.sys .text:0x2721cc, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) ddcci_set_vcp_feature;
    
    // [Destroy@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b2b0, 0x13864 bytes
    // win32kfull.sys .text:0x272310, 0x1596d bytes
    // win32kfull.sys .text:0x2723c0, 0x1659e bytes
    // win32kfull.sys .text:0x272260, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) destroy;
    
    // [GetMonitorDescription@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b4f4, 0x13864 bytes
    // win32kfull.sys .text:0x2725e8, 0x1596d bytes
    // win32kfull.sys .text:0x272698, 0x1659e bytes
    // win32kfull.sys .text:0x272538, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) get_monitor_description;
    
    // [VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b614, 0x13864 bytes
    // win32kfull.sys .text:0x272758, 0x1596d bytes
    // win32kfull.sys .text:0x2727f0, 0x1659e bytes
    // win32kfull.sys .text:0x2726a8, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) verify_ddcci_message_checksum;
};
#include "magic/api.end.hpp"
