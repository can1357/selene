#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_entry_t.hpp"
#include "../stor/port/extended_request_block_t.hpp"

#include "magic/resource_entry_t.start.hpp"
namespace io
{
    // [struct _IO_RESOURCE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_entry_t                                                
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 struct nt::slist_entry_t                    entry;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 uint32_t                                    hash_index;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashIndex
        _m02 struct stor::port::extended_request_block_t xrb;                //{ +0x0010    +0x0020    +0x0030    +0x0020    } | .Xrb
        _m03 sdk::array<uint8_t, 256>                    sense_info_buffer;  //{ +0x0320    +0x0340    +0x0350    +0x0340    } | .SenseInfoBuffer
        _m04 sdk::array<uint8_t>                         srb_extension;      //{ +0x0420    +0x0440    +0x0450    +0x0440    } | .SrbExtension
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m05 uint32_t                                    length;             //{ +0x0010    +0x0010    +0x0010    } | .Length
        _m06 uint32_t                                    padd;               //{ +0x0014    +0x0014    +0x0014    } | .Padd
        _m07 int64_t                                     logical_address;    //{ +0x0018    +0x0018    +0x0018    } | .LogicalAddress
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m08 void*                                       gateway;            //{ +0x0020    } | .Gateway
                                                                           
        SDK_MAGIC_PROPERTIES( "_IO_RESOURCE_ENTRY.$", 0x440, true, 0x4ade197a0b7a54d7 );                  
        SDK_DYNAMIC_SIZE( resource_entry_t );                              
    };                                                                     
};
#include "magic/resource_entry_t.end.hpp"
