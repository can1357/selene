#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/activation_context_data_com_server_redirection_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_com_server_redirection_t
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                           
        _m00 uint32_t          size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t          flags;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t          threading_model;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadingModel
        _m03 struct nt::guid_t reference_clsid;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReferenceClsid
        _m04 struct nt::guid_t configured_clsid;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ConfiguredClsid
        _m05 struct nt::guid_t implemented_clsid;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ImplementedClsid
        _m06 struct nt::guid_t type_library_id;              //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TypeLibraryId
        _m07 uint32_t          module_length;                //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ModuleLength
        _m08 uint32_t          module_offset;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ModuleOffset
        _m09 uint32_t          prog_id_length;               //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ProgIdLength
        _m10 uint32_t          prog_id_offset;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ProgIdOffset
        _m11 uint32_t          shim_data_length;             //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ShimDataLength
        _m12 uint32_t          shim_data_offset;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ShimDataOffset
        _m13 uint32_t          misc_status_default;          //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .MiscStatusDefault
        _m14 uint32_t          misc_status_content;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MiscStatusContent
        _m15 uint32_t          misc_status_thumbnail;        //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .MiscStatusThumbnail
        _m16 uint32_t          misc_status_icon;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MiscStatusIcon
        _m17 uint32_t          misc_status_doc_print;        //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .MiscStatusDocPrint
                                                           
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION.$", 0x78, true, 0xf41adacb709f6d1e );                      
        SDK_FIXED_SIZE( activation_context_data_com_server_redirection_t, 0x78 );                      
    };                                                     
};
#include "magic/activation_context_data_com_server_redirection_t.end.hpp"
SDK_VERIFY( struct win::activation_context_data_com_server_redirection_t, 0x78 );
