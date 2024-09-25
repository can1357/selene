#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_resource_state_update_serializer
{
    // [Allocate@CResourceStateUpdateSerializer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bffc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8190c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c18c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) allocate;
    
    // [GetSerializedUpdate@CResourceStateUpdateSerializer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69b0c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f9ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x69c9c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_serialized_update;
    
    // [IncreaseAddedBufferSize@CResourceStateUpdateSerializer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69b9c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7fa3c, 0x84380 bytes
    // dxgkrnl.sys .text:0x69d2c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) increase_added_buffer_size;
    
    // [IncreaseAddedContentSize@CResourceStateUpdateSerializer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69bd0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7fa70, 0x84380 bytes
    // dxgkrnl.sys .text:0x69d60, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) increase_added_content_size;
    
    // [IncreaseUpdatedContentSize@CResourceStateUpdateSerializer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69c04, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7faa4, 0x84380 bytes
    // dxgkrnl.sys .text:0x69d94, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) increase_updated_content_size;
};
#include "magic/api.end.hpp"
