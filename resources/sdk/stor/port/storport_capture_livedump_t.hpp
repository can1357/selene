#pragma once
#include <sdkgen/support_library.hpp>
#include "storport_livedump_data_type_t.hpp"
#include "storport_livedump_issue_type_t.hpp"
#include "storport_capture_livedump_type_t.hpp"

#include "magic/storport_capture_livedump_t.start.hpp"
namespace stor::port
{
    // [struct _STORPORT_CAPTURE_LIVEDUMP]
    // => Windows 11
    //
    struct storport_capture_livedump_t                                      
    {                                                                       
        using live_dump_type_t = enum stor::port::storport_capture_livedump_type_t;               
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m00 uint32_t                                        version;         //{ +0x0000    } | .Version
        _m01 uint32_t                                        size;            //{ +0x0004    } | .Size
        _m02 live_dump_type_t                                live_dump_type;  //{ +0x0008    } | .LiveDumpType
        _m03 enum stor::port::storport_livedump_issue_type_t issue_type;      //{ +0x000c    } | .IssueType
        _m04 wchar_t*                                        component_name;  //{ +0x0010    } | .ComponentName
        _m05 enum stor::port::storport_livedump_data_type_t  data_type;       //{ +0x0018    } | .DataType
        _m06 void*                                           data;            //{ +0x0020    } | .Data
                                                                            
        SDK_MAGIC_PROPERTIES( "_STORPORT_CAPTURE_LIVEDUMP.$", 0x0, false, 0xdf8414eab8a6eb4 );               
        SDK_FIXED_SIZE( storport_capture_livedump_t, 0x28 );                
    };                                                                      
};
#include "magic/storport_capture_livedump_t.end.hpp"
SDK_VERIFY( struct stor::port::storport_capture_livedump_t, 0x28 );
