#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_header_t.hpp"
#include "wudfmessage_io_header_t.hpp"

#include "magic/wudfmessage_create_t.start.hpp"
namespace wdf
{
    struct wudf_create_context_t;
    struct wudf_devnode_context_t;
    struct rd_file_object_context_t;

    // [struct _WUDFMESSAGE_CREATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_create_t                                           
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                
        _m00 struct wdf::wudfmessage_header_t      header;                  //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wdf::wudfmessage_io_header_t   io_header;               //{ +0x0000    +0x0000    +0x0000    } | .IoHeader
        _m02 struct wdf::wudf_devnode_context_t*   devnode_context;         //{ +0x0030    +0x0030    +0x0030    } | .DevnodeContext
        _m03 uint64_t                              file_name_byte_length;   //{ +0x0038    +0x0038    +0x0038    } | .FileNameByteLength
        _m04 uint32_t                              options;                 //{ +0x0040    +0x0040    +0x0040    } | .Options
        _m05 uint16_t                              file_attributes;         //{ +0x0044    +0x0044    +0x0044    } | .FileAttributes
        _m06 uint16_t                              share_access;            //{ +0x0046    +0x0046    +0x0046    } | .ShareAccess
        _m07 uint32_t                              desired_access;          //{ +0x0048    +0x0048    +0x0048    } | .DesiredAccess
        _m08 struct wdf::wudf_create_context_t*    related_create_context;  //{ +0x0050    +0x0050    +0x0050    } | .RelatedCreateContext
        _m09 uint32_t                              initiator_process_id;    //{ +0x0058    +0x0058    +0x0058    } | .InitiatorProcessId
        _m10 struct wdf::rd_file_object_context_t* rd_file_object_context;  //{ +0x0060    +0x0060    +0x0060    } | .RdFileObjectContext
                                                                          
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_CREATE.$", 0x68, true, 0x5f5415307809a66 );                       
        SDK_FIXED_SIZE( wudfmessage_create_t, 0x68 );                       
    };                                                                    
};
#include "magic/wudfmessage_create_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_create_t, 0x68 );
