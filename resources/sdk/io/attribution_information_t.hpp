#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/attribution_information_t.start.hpp"
namespace io
{
    // [struct _IO_ATTRIBUTION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct attribution_information_t                        
    {                                                       
        union u0_flags_t                                    
        {                                                   
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                              
            _m01 uint8_t  major_code;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MajorCode
            _m02 uint1_t  io_start;                           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IoStart
            _m03 uint1_t  queue_only;                         //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .QueueOnly
            _m04 uint1_t  io_failed;                          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .IoFailed
            _m05 uint1_t  virtual_device;                     //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .VirtualDevice
            _m06 uint32_t all_flags;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                            
            SDK_NONVOL_PROPERTIES( "_IO_ATTRIBUTION_INFORMATION.Flags.$", 0x4, true, 0xbeff3ba6caf3cee4 );                                  
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                  
        };                                                  
                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                  
        _m00 uint32_t                    version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m07 u0_flags_t                  flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m08 uint32_t                    length;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m09 uint64_t                    service_start_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceStartTime
        _m10 uint64_t                    current_time;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentTime
                                                            
        SDK_NONVOL_PROPERTIES( "_IO_ATTRIBUTION_INFORMATION.$", 0x20, true, 0x85544d8156b1a178 );                   
        SDK_FIXED_SIZE( attribution_information_t, 0x20 );                   
    };                                                      
};
#include "magic/attribution_information_t.end.hpp"
SDK_VERIFY( union io::attribution_information_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct io::attribution_information_t, 0x20 );
