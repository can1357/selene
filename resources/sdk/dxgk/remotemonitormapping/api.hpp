#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::remotemonitormapping
{
    // [FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33dfe4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) find_mapping_from_guest_vid_pn_source_id;
    
    // [FindMappingFromHostId@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33e06c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) find_mapping_from_host_id;
    
    // [RemoveMappingEntry@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33e108, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) remove_mapping_entry;
    
    // [AddMapping@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be958, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33dcf4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bea28, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_mapping;
    
    // [Clear@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2bea4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33deb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2beb1c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) clear;
    
    // [FindMappingFromGuestId@REMOTEMONITORMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2beaec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33df40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2bebbc, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) find_mapping_from_guest_id;
};
#include "magic/api.end.hpp"
