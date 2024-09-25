#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_reference_tracker::c_reference_counted_type
{
    // [BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15dd00, 0x243e0 bytes
    // win32kbase.sys .text:0x191714, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c0f0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) begin_track;
    
    // [Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15ddd4, 0x243e0 bytes
    // win32kbase.sys .text:0x1917e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c1c4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15de98, 0x243e0 bytes
    // win32kbase.sys .text:0x1918ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c288, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) reference_dereference_common;
    
    // [ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x15e184, 0x243e0 bytes
    // win32kbase.sys .text:0x191b94, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c574, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_to_most_recently_freed_list;
};
#include "magic/api.end.hpp"
