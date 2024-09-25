#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "wudfmessage_header_t.hpp"

#include "magic/wudfmessage_io_header_t.start.hpp"
namespace wdf
{
    // [struct _WUDFMESSAGE_IO_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_io_header_t                                   
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m00 struct wdf::wudfmessage_header_t header;                  //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                            irp;                     //{ +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 uint64_t                         request_id;              //{ +0x0010    +0x0010    +0x0010    } | .RequestId
        _m03 uint32_t                         process_id;              //{ +0x0018    +0x0018    +0x0018    } | .ProcessId
        _m04 uint8_t                          is32bit_process;         //{ +0x001c    +0x001c    +0x001c    } | .Is32bitProcess
        _m05 char                             requestor_mode;          //{ +0x001d    +0x001d    +0x001d    } | .RequestorMode
        _m06 uint8_t                          direct_mapped_transfer;  //{ +0x001e    +0x001e    +0x001e    } | .DirectMappedTransfer
        _m07 uint8_t                          is_activity_id_set;      //{ +0x001f    +0x001f    +0x001f    } | .IsActivityIdSet
        _m08 struct nt::guid_t                activity_id;             //{ +0x0020    +0x0020    +0x0020    } | .ActivityId
                                                                     
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_IO_HEADER.$", 0x30, true, 0xd4f67e2a1576bc2d );                       
        SDK_FIXED_SIZE( wudfmessage_io_header_t, 0x30 );                       
    };                                                               
};
#include "magic/wudfmessage_io_header_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_io_header_t, 0x30 );
