#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace csr
{
    // [CsrApiPort]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11fcc8, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ca30, 0x243e0 bytes
    // win32kbase.sys .data:0x2b01b8, 0x27ef0 bytes
    // win32kbase.sys .data:0x259a60, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) api_port;
    
    // [CsrAllocateCaptureBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4620, 0x67960 bytes
    // ntdll.dll .text:0x70e90, 0x6fc38 bytes
    // ntdll.dll .text:0x746b0, 0x74648 bytes
    // ntdll.dll .text:0x71030, 0x6fc38 bytes
    //
    _m1(sdk::unknown_ptr) allocate_capture_buffer;
    
    // [CsrAllocateMessagePointer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x45e0, 0x67960 bytes
    // ntdll.dll .text:0x70e40, 0x6fc38 bytes
    // ntdll.dll .text:0x74660, 0x74648 bytes
    // ntdll.dll .text:0x70fe0, 0x6fc38 bytes
    //
    _m2(sdk::unknown_ptr) allocate_message_pointer;
    
    // [CsrCaptureMessageBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x43a0, 0x67960 bytes
    // ntdll.dll .text:0x70410, 0x6fc38 bytes
    // ntdll.dll .text:0x74390, 0x74648 bytes
    // ntdll.dll .text:0x705b0, 0x6fc38 bytes
    //
    _m3(sdk::unknown_ptr) capture_message_buffer;
    
    // [CsrCaptureMessageMultiUnicodeStringsInPlace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4400, 0x67960 bytes
    // ntdll.dll .text:0x70c80, 0x6fc38 bytes
    // ntdll.dll .text:0x744b0, 0x74648 bytes
    // ntdll.dll .text:0x70e20, 0x6fc38 bytes
    //
    _m4(sdk::unknown_ptr) capture_message_multi_unicode_strings_in_place;
    
    // [CsrCaptureMessageString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4520, 0x67960 bytes
    // ntdll.dll .text:0x70d90, 0x6fc38 bytes
    // ntdll.dll .text:0x745b0, 0x74648 bytes
    // ntdll.dll .text:0x70f30, 0x6fc38 bytes
    //
    _m5(sdk::unknown_ptr) capture_message_string;
    
    // [CsrCaptureTimeout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0290, 0x67960 bytes
    // ntdll.dll .text:0xcb310, 0x6fc38 bytes
    // ntdll.dll .text:0xd6560, 0x74648 bytes
    // ntdll.dll .text:0xcb290, 0x6fc38 bytes
    //
    _m6(sdk::unknown_ptr) capture_timeout;
    
    // [CsrClientCallServer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4220, 0x67960 bytes
    // ntdll.dll .text:0x70ae0, 0x6fc38 bytes
    // ntdll.dll .text:0x74780, 0x74648 bytes
    // ntdll.dll .text:0x70c80, 0x6fc38 bytes
    //
    _m7(sdk::unknown_ptr) client_call_server;
    
    // [CsrClientConnectToServer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3bb0, 0x67960 bytes
    // ntdll.dll .text:0x70470, 0x6fc38 bytes
    // ntdll.dll .text:0x4b5a0, 0x74648 bytes
    // ntdll.dll .text:0x70610, 0x6fc38 bytes
    //
    _m8(sdk::unknown_ptr) client_connect_to_server;
    
    // [CsrClientProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ab8, 0x67960 bytes
    // ntdll.dll .data:0x16ac10, 0x6fc38 bytes
    // ntdll.dll .data:0x184b10, 0x74648 bytes
    // ntdll.dll .data:0x16bc10, 0x6fc38 bytes
    //
    _m9(sdk::unknown_ptr) client_process;
    
    // [CsrFreeCaptureBuffer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x41f0, 0x67960 bytes
    // ntdll.dll .text:0x70ab0, 0x6fc38 bytes
    // ntdll.dll .text:0x74940, 0x74648 bytes
    // ntdll.dll .text:0x70c50, 0x6fc38 bytes
    //
    _n0(sdk::unknown_ptr) free_capture_buffer;
    
    // [CsrGetProcessId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd02b0, 0x67960 bytes
    // ntdll.dll .text:0xcb340, 0x6fc38 bytes
    // ntdll.dll .text:0xd6590, 0x74648 bytes
    // ntdll.dll .text:0xcb2c0, 0x6fc38 bytes
    //
    _n1(sdk::unknown_ptr) get_process_id;
    
    // [CsrHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153b00, 0x67960 bytes
    // ntdll.dll .data:0x16ac60, 0x6fc38 bytes
    // ntdll.dll .data:0x184b60, 0x74648 bytes
    // ntdll.dll .data:0x16bc60, 0x6fc38 bytes
    //
    _n2(sdk::unknown_ptr) heap;
    
    // [CsrIdentifyAlertableThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0x8e440, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _n3(sdk::unknown_ptr) identify_alertable_thread;
    
    // [CsrInitOnceDone]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ab9, 0x67960 bytes
    // ntdll.dll .data:0x16ac11, 0x6fc38 bytes
    // ntdll.dll .data:0x184b11, 0x74648 bytes
    // ntdll.dll .data:0x16bc11, 0x6fc38 bytes
    //
    _n4(sdk::unknown_ptr) init_once_done;
    
    // [CsrPortBaseTag]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153af8, 0x67960 bytes
    // ntdll.dll .data:0x16ac58, 0x6fc38 bytes
    // ntdll.dll .data:0x184b58, 0x74648 bytes
    // ntdll.dll .data:0x16bc58, 0x6fc38 bytes
    //
    _n5(sdk::unknown_ptr) port_base_tag;
    
    // [CsrPortHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ae8, 0x67960 bytes
    // ntdll.dll .data:0x16ac48, 0x6fc38 bytes
    // ntdll.dll .data:0x184b48, 0x74648 bytes
    // ntdll.dll .data:0x16bc48, 0x6fc38 bytes
    //
    _n6(sdk::unknown_ptr) port_handle;
    
    // [CsrPortHeap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153af0, 0x67960 bytes
    // ntdll.dll .data:0x16ac50, 0x6fc38 bytes
    // ntdll.dll .data:0x184b50, 0x74648 bytes
    // ntdll.dll .data:0x16bc50, 0x6fc38 bytes
    //
    _n7(sdk::unknown_ptr) port_heap;
    
    // [CsrPortMemoryRemoteDelta]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ae0, 0x67960 bytes
    // ntdll.dll .data:0x16ac40, 0x6fc38 bytes
    // ntdll.dll .data:0x184b40, 0x74648 bytes
    // ntdll.dll .data:0x16bc40, 0x6fc38 bytes
    //
    _n8(sdk::unknown_ptr) port_memory_remote_delta;
    
    // [CsrPortName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ac0, 0x67960 bytes
    // ntdll.dll .data:0x16ac20, 0x6fc38 bytes
    // ntdll.dll .data:0x184b20, 0x74648 bytes
    // ntdll.dll .data:0x16bc20, 0x6fc38 bytes
    //
    _n9(sdk::unknown_ptr) port_name;
    
    // [CsrProcessId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ad0, 0x67960 bytes
    // ntdll.dll .data:0x16ac30, 0x6fc38 bytes
    // ntdll.dll .data:0x184b30, 0x74648 bytes
    // ntdll.dll .data:0x16bc30, 0x6fc38 bytes
    //
    _o0(sdk::unknown_ptr) process_id;
    
    // [CsrReadOnlySharedMemorySize]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ad8, 0x67960 bytes
    // ntdll.dll .data:0x16ac38, 0x6fc38 bytes
    // ntdll.dll .data:0x184b38, 0x74648 bytes
    // ntdll.dll .data:0x16bc38, 0x6fc38 bytes
    //
    _o1(sdk::unknown_ptr) read_only_shared_memory_size;
    
    // [CsrServerApiRoutine]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153ab0, 0x67960 bytes
    // ntdll.dll .data:0x16ac08, 0x6fc38 bytes
    // ntdll.dll .data:0x184b08, 0x74648 bytes
    // ntdll.dll .data:0x16bc08, 0x6fc38 bytes
    //
    _o2(sdk::unknown_ptr) server_api_routine;
    
    // [CsrSetPriorityClass]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd41b0, 0x67960 bytes
    // ntdll.dll .text:0xd5220, 0x6fc38 bytes
    // ntdll.dll .text:0xe0500, 0x74648 bytes
    // ntdll.dll .text:0xd5190, 0x6fc38 bytes
    //
    _o3(sdk::unknown_ptr) set_priority_class;
    
    // [CsrVerifyRegion]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd02d0, 0x67960 bytes
    // ntdll.dll .text:0xcb360, 0x6fc38 bytes
    // ntdll.dll .text:0xd65b0, 0x74648 bytes
    // ntdll.dll .text:0xcb2e0, 0x6fc38 bytes
    //
    _o4(sdk::unknown_ptr) verify_region;
};
#include "magic/api.end.hpp"
