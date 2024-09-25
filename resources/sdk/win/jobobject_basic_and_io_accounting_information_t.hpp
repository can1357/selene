#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/counters_t.hpp"
#include "jobobject_basic_accounting_information_t.hpp"

#include "magic/jobobject_basic_and_io_accounting_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_basic_and_io_accounting_information_t        
    {                                                             
        using jobobject_basic_accounting_information_t = struct win::jobobject_basic_accounting_information_t;           
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                        
        _m00 jobobject_basic_accounting_information_t  basic_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInfo
        _m01 struct io::counters_t                     io_info;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IoInfo
                                                                  
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION.$", 0x60, true, 0xd3d08e39b1e8147d );           
        SDK_FIXED_SIZE( jobobject_basic_and_io_accounting_information_t, 0x60 );           
    };                                                            
};
#include "magic/jobobject_basic_and_io_accounting_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_basic_and_io_accounting_information_t, 0x60 );
