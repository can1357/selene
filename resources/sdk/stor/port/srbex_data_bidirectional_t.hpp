#pragma once
#include <sdkgen/support_library.hpp>
#include "srbexdatatype_t.hpp"

#include "magic/srbex_data_bidirectional_t.start.hpp"
namespace stor::port
{
    // [struct _SRBEX_DATA_BIDIRECTIONAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct srbex_data_bidirectional_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                            
        _m00 enum stor::port::srbexdatatype_t type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                         length;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t                         data_in_transfer_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataInTransferLength
        _m03 void*                            data_in_buffer;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataInBuffer
                                                                      
        SDK_MAGIC_PROPERTIES( "_SRBEX_DATA_BIDIRECTIONAL.$", 0x18, true, 0xb428ec76c9394f93 );                        
        SDK_FIXED_SIZE( srbex_data_bidirectional_t, 0x18 );                        
    };                                                                
};
#include "magic/srbex_data_bidirectional_t.end.hpp"
SDK_VERIFY( struct stor::port::srbex_data_bidirectional_t, 0x18 );
