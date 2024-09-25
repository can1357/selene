#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_client_side_file_view_mapper
{
    // [??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x297a9c, 0x1596d bytes
    // win32kfull.sys .text:0x297b5c, 0x1659e bytes
    // win32kfull.sys .text:0x297a0c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [TryMapAllFileViews@UmfdClientSideFileViewMapper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a7e74, 0x1596d bytes
    // win32kfull.sys .text:0x2a88a4, 0x1659e bytes
    // win32kfull.sys .text:0x2a7de4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) try_map_all_file_views;
};
#include "magic/api.end.hpp"
