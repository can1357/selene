#pragma once
#include <sdkgen/support_library.hpp>
#include "eventlogrecord_t.hpp"

#include "magic/eventsforlogfile_t.start.hpp"
namespace win
{
    // [struct _EVENTSFORLOGFILE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct eventsforlogfile_t                                             
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 ul_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulSize
        _m01 sdk::array<wchar_t, 256>                 sz_logical_log_file;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .szLogicalLogFile
        _m02 uint32_t                                 ul_num_records;       //{ +0x0204    +0x0204    +0x0204    +0x0204    } | .ulNumRecords
        _m03 sdk::array<struct win::eventlogrecord_t> p_event_log_records;  //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .pEventLogRecords
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENTSFORLOGFILE.$", 0x208, true, 0x434ba40853ab6db5 );                    
        SDK_FIXED_SIZE( eventsforlogfile_t, 0x208 );                      
    };                                                                    
};
#include "magic/eventsforlogfile_t.end.hpp"
SDK_VERIFY( struct win::eventsforlogfile_t, 0x208 );
