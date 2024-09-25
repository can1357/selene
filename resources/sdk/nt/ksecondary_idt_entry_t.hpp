#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/ksecondary_idt_entry_t.start.hpp"
namespace nt
{
    struct kinterrupt_t;

    // [struct _KSECONDARY_IDT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ksecondary_idt_entry_t                    
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint64_t                 spin_lock;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 struct nt::kevent_t      connect_lock;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectLock
        _m02 uint8_t                  line_masked;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LineMasked
        _m03 struct nt::kinterrupt_t* interrupt_list;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InterruptList
                                                     
        SDK_MAGIC_PROPERTIES( "_KSECONDARY_IDT_ENTRY.$", 0x30, true, 0xace43e995a1e269b );               
        SDK_FIXED_SIZE( ksecondary_idt_entry_t, 0x30 );               
    };                                               
};
#include "magic/ksecondary_idt_entry_t.end.hpp"
SDK_VERIFY( struct nt::ksecondary_idt_entry_t, 0x30 );
