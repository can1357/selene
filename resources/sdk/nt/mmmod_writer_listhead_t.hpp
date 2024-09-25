#pragma once
#include <sdkgen/support_library.hpp>
#include "kgate_t.hpp"
#include "kevent_t.hpp"

#include "magic/mmmod_writer_listhead_t.start.hpp"
namespace nt
{
    // [struct _MMMOD_WRITER_LISTHEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmmod_writer_listhead_t         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                 
        _m00 nt::list_entry_t    list_head;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 struct nt::kgate_t  gate;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Gate
        _m02 struct nt::kevent_t event;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Event
                                           
        SDK_MAGIC_PROPERTIES( "_MMMOD_WRITER_LISTHEAD.$", 0x28, true, 0xc39ce1a14d592b77 );          
        SDK_FIXED_SIZE( mmmod_writer_listhead_t, 0x28 );          
    };                                     
};
#include "magic/mmmod_writer_listhead_t.end.hpp"
SDK_VERIFY( struct nt::mmmod_writer_listhead_t, 0x28 );
