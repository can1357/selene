#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_list_entry_t.hpp"

#include "magic/stor_dispatcher_header_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_DISPATCHER_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_dispatcher_header_t                              
    {                                                            
        struct u0_data_t                                         
        {                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                   
            _m00 uint8_t type;                                     //{ +0x0000    +0x0000    +0x0000    } | .Type
            _m01 uint8_t flags;                                    //{ +0x0001    +0x0001    +0x0001    } | .Flags
            _m02 uint8_t size;                                     //{ +0x0002    +0x0002    +0x0002    } | .Size
            _m03 uint8_t inserted;                                 //{ +0x0003    +0x0003    +0x0003    } | .Inserted
            _m04 uint8_t debug_active;                             //{ +0x0003    +0x0003    +0x0003    } | .DebugActive
                                                                 
            SDK_MAGIC_PROPERTIES( "_STOR_DISPATCHER_HEADER.Data.$", 0x4, true, 0xfc35bf557dca112e );                            
            SDK_FIXED_SIZE( u0_data_t, 0x4 );                            
        };                                                       
                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                       
        _m05 u0_data_t                            data;            //{ +0x0000    +0x0000    +0x0000    } | .Data
        _m06 volatile int32_t                     lock;            //{ +0x0000    +0x0000    +0x0000    } | .Lock
        _m07 int32_t                              signal_state;    //{ +0x0004    +0x0004    +0x0004    } | .SignalState
        _m08 struct stor::port::stor_list_entry_t wait_list_head;  //{ +0x0008    +0x0008    +0x0008    } | .WaitListHead
                                                                 
        SDK_MAGIC_PROPERTIES( "_STOR_DISPATCHER_HEADER.$", 0x18, true, 0xd44c35fdfef4bff );               
        SDK_FIXED_SIZE( stor_dispatcher_header_t, 0x18 );               
    };                                                           
};
#include "magic/stor_dispatcher_header_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_dispatcher_header_t::u0_data_t, 0x4 );
SDK_VERIFY( struct stor::port::stor_dispatcher_header_t, 0x18 );
